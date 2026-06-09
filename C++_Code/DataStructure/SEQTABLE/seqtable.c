//引入必要的头文件
#include "seqtable.h"

//函数的实现与封装---------------------------------------------------------------------------------------------
SEQTable_t* createSeqTable(int n)
{
	SEQTable_t* table = NULL;
	table = (SEQTable_t*)malloc(sizeof(SEQTable_t));
	if (table == NULL)
	{
		fprintf(stderr, "SeqTable malloc failed\n");
		return NULL;
	}
	//free(table);
	table->data = (Element_t*)malloc(sizeof(Element_t) * n);
	if (table->data == NULL)
	{
		fprintf(stderr, "SeqTable data malloc failed\n");
		free(table);
		return NULL;
	}
	table->pos = 0;
	table->capacity = n;
	return table;
}

void showSeqTable(const SEQTable_t* table)
{
	assert(table);
	for (int i = 0; i < table->pos; ++i)
	{
		printf("%d\t", table->data[i]);
	}
	printf("\n");
}

void releaseSeqTable(SEQTable_t* table)
{
	assert(table);
	if (table)
	{
		if (table->data)
		{
			free(table->data);
		}
		free(table);
	}
}

static int enlargeTable(SEQTable_t* table)
{
	//1.再申请一个新空间,初始化申请的空间
	Element_t* tmp = malloc(sizeof(Element_t) * table->capacity * 2);
	if (tmp == NULL)
	{
		printf("enlargeTable malloc failed\n");
		return -1;
	}
	//2.拷贝老内容到新空间 for或直接空间拷贝
	memcpy(tmp, table->data, sizeof(Element_t) * table->pos);
	//3.更新表头 释放老空间
	table->capacity *= 2;
	free(table->data);
	table->data = tmp;
	return 0;
}

int pushbackSeqTable(SEQTable_t* table, Element_t value)
{
	if (table == NULL)
	{
		fprintf(stderr, "table is nullptr\n");
		return -1;
	}
	//顺序表没有空余的位置了 进行扩容
	//写法一
	//if (table->pos >= table->capacity)
	//{
	//	printf("Data is full\n");
	//	if (enlargeTable(table))
	//	{
	//		printf("enlargeTable failed\n");
	//	}
	//	
	//}
	//写法二
	if (table->pos >= table->capacity && enlargeTable(table))//这两可不能随意交换位置 能理解这里的意思吗
	{
		printf("Successful enlarge capacity\n");
		return -1;
	}
	table->data[table->pos] = value;
	++table->pos;
	return 0;
}

int insertPosSeqTable(SEQTable_t* table, int index, Element_t value)
{
	//1.空间有效性的判断
	if (index < 0 || index > table->pos)
	{
		printf("index invalid\n");
		return -1;
	}
	//扩容
	if (table->pos >= table->capacity && enlargeTable(table))
	{
		return -1;
	}
	//2.搬移数据为新数据腾出空间   从前往后 data[i+1]=data[i]
	for (int i = table->pos - 1; i >= index; --i)
	{
		table->data[i + 1] = table->data[i];
	}
	table->data[index] = value;
	table->pos++;
}

int findSeqTable(const SEQTable_t* table, Element_t value)
{
	for (int i = 0; i < table->pos; ++i)
	{
		if (table->data[i] == value)
		{
			return i;
		}
	}
	return -1;
}

int deleteSeqTable(SEQTable_t* table, Element_t value)
{
	assert(table && value);
	//1.查找value在数据结构中的索引位置
	int index = findSeqTable(table, value);
	if (index == -1)
	{
		printf("no find %d element\n", value);
		return -1;
	}
	//2.删除这个元素，把(index+1,pos)搬移覆盖到 把后一个给前一个
	for (int i = index + 1; i < table->pos; ++i)
	{
		table->data[i - 1] = table->data[i];
	}
	table->pos--;
}