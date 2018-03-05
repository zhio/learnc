#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void main()
{
    int i,j;
    int x=1;
    int y = 20;
	int velocity_x = 1;
	int velocity_y = 1;

	while(1)
	{
		x=x+velocity_x;
		y=y+velocity_y;
		system("cls");
		for (i=0;i<x;i++)
			printf("\n");
		for(j=0;j<y;j++)
				printf(" ");
		printf("o\n");

		Sleep(50);

		if(x>10||x<1)
			velocity_x = -1*velocity_x;
		if(y>20||y<1)
			velocity_y = -1*velocity_y;
	}
}