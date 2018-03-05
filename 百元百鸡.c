#include<stdio.h>
//百元买百济问题
int main()
{
	int x,y,z;

	for (x=0;x<=14;x++)
		for(y=0;y<=25;y++)
		{
			if(7*x+4*y==100)
			{	z=100-x-y;
				printf("%d,%d,%d\n",x,y,z);
			}
		}

/*			for(z=0;z<=100;z++)
			{
				if((z%3==0)&&(x+y+z==100)&&(5*x+3*y+z/3==100))
					printf("x=%d,y=%d,z=%d\n",x,y,z);
			}*/
}