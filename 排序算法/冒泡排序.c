#include<stdio.h>

void sort_bubble(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
}
main()
{
    int a[10],i;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    sort_bubble(a,10);
    for(i=0;i<10;i++)
        printf("%3d",a[i]);
    printf("\n");
}