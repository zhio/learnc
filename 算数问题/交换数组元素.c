#include<stdio.h>
void array_swap1(int a[],int k)//创建临时数组
{
    int t[50];
    int i;
    for(i=0;i<k;i++)
    {
        t[i]=a[i]
    }
    for(i=k;i<=n-1;i++)
    {
        a[i-k]=a[i];
    }
    for(i=0;i<k;i++)
    {
        a[n-k+i]=t[i]
    }
}

void array_reverse(int a[],int l,int h)//逆序数组中指定区间的元素
{
    int t;
    while(l<h)
    {
        t=a[l];
        a[l]=a[h];
        a[h]=t;
        l++;
        h--;
    }
}
void array_swap(int a[],int n,int k,)
{
    array_reverse(a,0,k-1);
    array_reverse(a,k,n-1);
    array_reverse(a,0,n-1);
}

main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int i,n=8,k=3;
    printf("交换前：");
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    print("\n");
    array_swap(a,n,k);
    printf("交换后（分段位置：%d）\n",k);
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    printf("\n");
}
