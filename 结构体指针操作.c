#include<stdio.h>
#include<stdlib.h>
struct Node//定义结构体
{
	int value;
	struct Node *next;
};
struct Node*creat()//创建
{
	int i,n;
	scanf_s("%d", &n);
	struct Node*phead = 0, *ptmp, *ptail = 0;
	int valuetmp;
	for (i = 0; i<n; i++)
	{
		printf("input value\n(if<0,end)");
		scanf_s("%d", &valuetmp);
		ptmp = (struct Node*)malloc(sizeof(struct Node));
		ptmp->value = valuetmp;
		ptmp->next = 0;
		if (!phead)
			phead = ptail = ptmp;
		else
		{
			ptail->next = ptmp;
			ptail = ptmp;
		}

	}
	return phead;
}
void list(struct Node*phead)//输出
{
	struct Node *tmp = phead;
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}
struct Node *search(struct Node *phead, int info)//查找
{
	struct Node *tmp;
	tmp = phead;
	while (tmp)
	{
		if (tmp->value == info)
			break;
		tmp = tmp->next;
	}
	return tmp;
}
struct Node *insert(struct Node*phead)//插入
{
	struct Node *tmp;
	tmp = (struct Node *)malloc(sizeof(struct Node));
	printf("please input the value\n");
	scanf_s("%d", &tmp->value);
	int flag = 1;
	struct Node *pPrev = 0, *pCur = phead;
	if (phead == 0)
		phead = tmp;
	while (flag)
	{
		if (pCur->value < tmp->value)
		{
			pPrev = pCur;
			pCur = pCur->next;
		}
		else
		{
			pPrev->next = tmp;
			tmp->next = pCur;
			flag = 0;
		}
	}
	return phead;
}
void insert_tail(struct Node *phead)//尾部插入
{
	struct Node *tmp;
	tmp = (struct Node *)malloc(sizeof(struct Node));
	printf("please input the value(in the end)\n");
	scanf_s("%d", &tmp->value);
	tmp->next = NULL;
	int flag = 1;
	struct Node *ptail = phead;
	if (!phead)
	{
		phead = tmp;
	}
	while (flag)
	{
		ptail = ptail->next;
		if (ptail->next == NULL)
		{
			ptail->next = tmp;
			flag = 0;
		}
	}
}
int main()
{
	int n;
	struct Node *phead = creat(), Node1 = { 3,NULL }, Node2 = { 9,NULL }, *Node4, *Node5;
	list(phead);
	phead = insert(phead);
	list(phead);
	insert_tail(phead);
	list(phead);
	return 0;
}