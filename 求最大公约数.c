#include<stdio.h>
//求最大公约数
void main()
{
	int a,b,c;
	a = 8;
	b = 12;
	c=a;
	while(a<b)
	{
		c=b;
		break;
	}
	
	for (;c>0;c--)
	{
		if((a%c==0)&&(b%c==0))
		{
			printf("%d",c);
			break;
		}
	}
}