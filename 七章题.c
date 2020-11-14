#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define STUD_N 40
#define COURSE_N 3



void rearScore(int score[][COURSE_N], long num[], int n)
{
	int i, j;
	printf("input Student's ID and score as:MT EN  PH:");
	for (i = 0; i < n; i++)
	{
		scanf("%ld", &num[i]);
		for (j = 0; j < COURSE_N; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
}
void AverforStud(int score[][COURSE_N], int sum[], float aver[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		sum[i] = 0;
		for (j = 0; j < COURSE_N; j++)
		{
			sum[i] = sum[i] + score[i][j];
		}
		aver[i] = (float)sum[i] / COURSE_N;
	}
}
void Print(int score[][COURSE_N], long num[], int sumS[], float averS[], int sumC[], float averC[], int n)
{
	//int i, j;
	printf("Student's ID\t  MT\t  EN\t  PH\t  SUM  \t  AVER\n");

}
int main()
{
	int score[STUD_N][COURSE_N], sumS[STUD_N], sumC[COURSE_N], n;
	long num[STUD_N];
	float averS[STUD_N], averC[COURSE_N];
	printf("input the total number of the student:");
	scanf("%d", &n);
	readScore(score, num, n);
	AverforStud(score, sumS, averS, n);
	Print(score, num, sumS, averS,sumC, averC, n);
	return 0;


}