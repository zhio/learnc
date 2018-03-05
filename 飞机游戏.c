#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

 int  main()
 {
    int i,j;
    int x= 10;
    int y = 5;
    char input; 
    
    int ny = 5;
    int isFired = 0;
    int iskild = 0;
    while(1)
    {
        system("cls");//消屏

        if (iskild==0)
        {
            for(i=0;i<ny;i++)
                printf(" ");
            printf("+\n"); 
        }


        if(isFired==0)
        {
            for (i=0;i<x;i++)
                printf("\n");
        }
        else
        {
             for (i=0;i<x;i++)
             {
                 for (j=0;j<y;j++)
                    printf(" ");
             }   printf("  |\n");
             if(y+2==ny)
                iskild=1;
            isFired=0;

        }
 
        for(j=0;j<y;j++)
            printf(" ");
        printf("  *\n");
        for(j=0;j<y;j++)
            printf(" ");
        printf("*****\n");       
        for(j=0;j<y;j++)
            printf(" ");
        printf(" * *\n");   

        //scanf("%c",&input);
		if(kbhit())
		{
			input = getch();
			if(input=='s')
				x++;
			if(input=='w')
				x--;
			if(input=='a')
				y++;
			if(input=='d')
				y--;
			if(input=='f')
				isFired=1;
		}
    }
 }