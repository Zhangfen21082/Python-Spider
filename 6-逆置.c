#include <stdio.h>
#define maxSize 100

//˳�������

typedef struct
{
	int data[maxSize];
	int length
}Sqlist;
//Sqlist* L
//Sqlist& L
//Sqlist*&L

int main(void)
{
	Sqlist L;
	int left = 0;
	int right = sizeof(L.data) / sizeof(L.data[1]);
	for (int i = left, j = right; i < j; ++i, --j)
	{
		int temp = L.data[i];
		L.data[i] = L.data[j];
		L.data[j] = temp;
	}
}

//��������
typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode;

//Ҫ�������p��Ԫ�أ���������p��Ԫ�أ��Ժ󵽵�q��Ԫ�أ�������֮��Ԫ������

int main(void)
{
	LNode* p;
	LNode* q;
	LNode* t;

	while (p->next != q)
	{
		t = p->next;
		p->next = t->next;
		t->next = q->next;
		q->next = t;
	}
}
