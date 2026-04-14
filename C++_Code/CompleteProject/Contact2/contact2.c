#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact2.h"//包含自定义的头文件

//函数实现-----------------------------------------------------------------------------------------------
void CheckCapacity(Contact* pc)
{
	if (pc->count == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
		}
	}
}

void LoadContact(Contact* pc)
{
	assert(pc);
	FILE* pfRead = fopen("contact.txt", "rb");
	if (pfRead == NULL)
	{
		perror("LoadContact");
	}
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead) == 1)//能读取到的话fread的返回值是一
	{
		CheckCapacity(pc);
		pc->data[pc->count] = tmp;
		pc->count++;
	}
	fclose(pfRead);
	pfRead = NULL;
}

void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	
	pc->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
	}
	pc->capacity = DEFAULT_SZ;
	//加载文件的信息到通讯录中
	LoadContact(pc);
	return 0;
}

void DestoryContact(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	printf("销毁成功\n");
}

void AddContact(Contact* pc)
{
	assert(pc);
	//增加容量
	CheckCapacity(pc);

	printf("请输入名字:");
	scanf("%s", pc->data[pc->count].name);//数组名本来就是地址 所以这里不用取地址
	printf("请输入年龄:");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别:");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话:");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址:");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("增加成功\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%20s\t%5s\t%5s\t%12s\t%30s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%3d\t%5s\t%12s\t%30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);
	//判断
	if (pc->count == 0)
	{
		printf("通讯录为空没有信息可以删除\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入要删除的人名\n");
	scanf("%s", &name);
	//执行删除
	//1.查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("通讯录不存在此人\n");
		return;
	}
	//2.删除 后面的信息往前面覆盖就可以了
	int i = 0;
	for (i = pos; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功\n");
}

void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找的人的名字\n");
	scanf("%s", name);
	//1.查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("查找不到此人\n");
		return;
	}
	//2.打印
	printf("已查找到\n其信息如下\n");
	printf("%20s\t%5s\t%5s\t%12s\t%30s\n", "名字", "年龄", "性别", "电话", "地址");
	printf("%20s\t%3d\t%5s\t%12s\t%30s\n",
		pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改的人的名字\n");
	scanf("%s", &name);
	//1.查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	//2.修改
	printf("要修改的人的信息已经查找到,现在开始修改\n");
	printf("请输入名字:");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功\n");
}

int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

int cmp_peo_by_age(const void* e1, const void* e2)
{
	int age1 = ((PeoInfo*)e1)->age, age2 = ((PeoInfo*)e2)->age;
	if (age1 > age2)
	{
		return 1;
	}
	else if (age1 < age2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

void SortContact(Contact* pc)
{
	assert(pc);
	printf("请输入你要排序的依据:name还是age\n");
	char cmp_roof[5] = { 0 };
	scanf("%s", cmp_roof);
	if (strcmp(cmp_roof, "name") == 0)
	{
		qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	}
	if (strcmp(cmp_roof, "age") == 0)
	{
		qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_age);
	}
	printf("排序成功\n");
}

void SaveContact(const Contact* pc)
{
	assert(pc);
	FILE* pfWrite = fopen("contact.txt", "wb");
	if (pfWrite == NULL)
	{
		perror("SaveContact");
		return;
	}
	//写文件---二进制的形式来写
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pfWrite);//这个data + i 因为fwrite的第一参数是地址
	}
	//关闭文件
	fclose(pfWrite);
	pfWrite = NULL;
}
