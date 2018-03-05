#include<stdio.h>
//判断素数
void main()
{
	int i,n;
	//scanf("%d",&n);
	for (n=2;n<=99;n++)
	{
		for (i=2;i<=n;i++)
		{
			if(n%i==0)
				break;
		}
		if(i==n)
			printf("%d是素数\n",n);
		else
			continue;
			//printf("%d不是素数\n",n);
	}
}