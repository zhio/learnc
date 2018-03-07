#include <stdio.h>
void main()
{
    int i,a,b,c,sum;
    for(i=100;i<=999;i++)
    {
        a=i/100;
        b=i%100/10;
        c=i%10;
        sum=a*a*a+b*b*b+c*c*c;
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
}
