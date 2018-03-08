#include<stdio.h>

void sort_select(int x[],int n)
{
    int i,j,k,t;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(x[j]<x[k])
                k=j;
        }
        if(k!=i)
        {
            t=x[i];
            x[i]=x[k];
            x[k]=t;
        }
    }
}

main()
{
    int a[10],i;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    sort_select(a,10);
    for(i=0;i<10;i++)
        printf("%3d",a[i]);
    printf("\n");
}