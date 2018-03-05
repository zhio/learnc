#include<stdio.h>
//求PI的近似值
void main()
{
	float pi=0;
	int i=1;
	float t = 1;

	//for (i=1;i<=1000;i++)
	while(1.0/(2*i-1)>1e-12)
	{
		pi = pi+t*1.0/(2*i-1);
		t = -1*t;
		i++;
	}
	pi = pi*4;
	printf("%f\n",pi);

}