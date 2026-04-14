#define _CRT_SECURE_NO_WARNINGS 1
#include "SL.h"
//函数实现

LinkList_t* creatLinkList()
{
	LinkList_t* table = NULL;
	table = (LinkList_t*)malloc(sizeof(LinkList_t));
	if (table == NULL)
	{
		perror(errno);
		return NULL;
	}
	table->head.val = 0;
	table->head.next = NULL;
	table->count = 0;
	return table;
}

void insertLinkListHeader(LinkList_t* table, Element_t num)
{
	assert(table != NULL);
	node_t* newNode = (node_t*)malloc(sizeof(node_t));
	if (newNode == NULL)
	{
		perror("malloc failed for newNode");
		return;
	}
	newNode->val = num;
	newNode->next = table->head.next;
	table->head.next = newNode;
	table->count++;
}

void insertLinkListPos(LinkList_t* table, Element_t num, int where)
{
	assert(table);
	//判断边界值
	if (where < 0 || where > table->count)
	{
		printf("The position that you want to insert is wrong\n");
		return;
	}
	node_t* newNode = (node_t*)malloc(sizeof(node_t));
	if (newNode == NULL)
	{
		perror(errno);
		return;
	}
	newNode->val = num;
	newNode->next = NULL;
	//头节点的话就直接头插
	if (where == 0)
	{
		newNode->next = table->head.next;
		table->head.next = newNode;
		table->count++;
	}
	//其它节点是需要找到where-1这个节点的首地址的
	node_t* prev = &table->head;
	for (int i = 0; i < where; i++)
	{
		prev = prev->next;
	}
	newNode->next = prev->next;
	prev->next = newNode;
	table->count++;
}

void showLinkList(const LinkList_t* table)
{
	node_t* p = table->head.next;
	printf("link list: %d\n",table->count);
	while (p)
	{
		printf("%d-->", p->val);
		p = p->next;
	}
	printf("NULL\n");
}

LinkList_t* releaseLinkList()
{

	return 0;
}