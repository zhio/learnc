#include<stdio.h>
#define N 40
void main()
{
    int i;
    int f[N];
	f[1]=1;
	f[0]=1;
    for(i=2;i<40;i++)
		f[i]=f[i-1]+f[i-2];
	for(i=0;i<40;i++)
	{
		if (i%5==0)
			printf("\n");
		printf("%d ",f[i]);
	}
}