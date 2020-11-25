#include <stdio.h>
#define maxSize 100

typedef struct BTNode
{
	char data;
	struct BTNode* lchirld;
	struct BTNode* rchirld;
}BTNode;




////////////////��������α���(�������)///////////////////////
//1:ʵ�ַ���
/*
	������һ��������Ϊ��---��һ��1�����ڶ���2����������4�����ֱ���˳������ΪA,B,C,D,E,F,G
	����A����ӣ�����A���ӣ��ж�A�����Һ���B��C���ڣ���B��C��ӣ��ٽ�B���ӣ��ж�B�����Һ���D,E���ڣ�
	������ӣ��ٽ�C���ӣ��ж�C�����Һ���F��G���ڣ���F��G��ӣ�����D��E������F��G
*/
//2:����ʵ��
void level(BTNode* bt)
{
	if (bt != NULL)
	{
		int front, rear;//����һ������
		BTNode* queue[maxSize];//��Ȼ��һ����������в���Ҫ������Ԫ�أ�ֻ�豣���ַ
		front = rear = 0;//���г�ʼ��
		BTNode* p;//��������ָ��

		rear = (rear + 1) % maxSize;
		queue[rear] = bt;//�����ͷ���
		while (front != rear)
		{
			front = (front + 1) % maxSize;//�ٳ��ӽ��(ͷ���)
			p = queue[front];
			visit(p);
			if (p->lchirld != NULL)//�ж�����ڵ�����Һ�����������������
			{
				rear = (rear + 1) % maxSize;
				queue[rear] = p->lchirld;
			}
			if (p->rchirld != NULL)
			{
				rear = (rear + 1) % maxSize;
				queue[rear] = p->rchirld;
			}
		}
	}


}