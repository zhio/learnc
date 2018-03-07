#include<stdio.h>
float average(int stu[10],int n);
void main()
{
	int score[10],i;
	float av;
	printf("Input 10 scores:\n");
	for(i=0;i<10;i++)
		scanf("%d",&score[i]);
	av=average(score,10);
	printf("Average is: %.2f",av);
}

float average(int stu[],int n)
{
	int i;
	float av,total=0;
	for(i=0;i<n;i++)
		total+=stu[i];
	av=total/n;
	return av;
}