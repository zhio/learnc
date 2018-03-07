#include<stdio.h>
//求1+1/2+1/3+1/4+...+1/n>=5
void main()
{
	int i=0;
	double s=0;
	while(s<5)
	{
		i++;
		s=s+1.0/i;
	}
	printf("n=%d\n",i);
}