#include<stdio.h>
void main()
{
    int i=1,sum=0;
    while(i<=100)
    {
        sum=sum+i;
        i++;
    }
    printf("SUM=%d\t",sum);
    printf("i=%d",i);
}