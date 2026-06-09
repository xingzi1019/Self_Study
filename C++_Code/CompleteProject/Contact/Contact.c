#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"//包含自定义的头文件

//函数实现-----------------------------------------------------------------------------------------------
//静态版本的初始化
void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	assert(pc);
	//先判断有通讯录有没有满 不要老是忘记
	if (pc->count == MAX)
	{
		printf("通讯录已满\n无法再增加\n");
		return;
	}
	else
	{
		printf("请输入名字:\n");
		scanf("%s", pc->data[pc->count].name);//数组名本来就是地址 所以这里不用取地址
		printf("请输入年龄:\n");
		scanf("%d", &(pc->data[pc->count].age));
		printf("请输入性别:\n");
		scanf("%s", pc->data[pc->count].sex);
		printf("请输入电话:\n");
		scanf("%s", pc->data[pc->count].tele);
		printf("请输入地址:\n");
		scanf("%s", pc->data[pc->count].addr);
		pc->count++;
		printf("增加成功\n");
	}
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
	printf("请输入名字:\n");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:\n");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:\n");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:\n");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:\n");
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
	int cmp_roof[5] = { 0 };
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