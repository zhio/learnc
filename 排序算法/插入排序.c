#include<stdio.h>
#define N 8
//输出数组
void printArray(int a[],int n)
{
    int i;
    for(i=0;i<N;i++)
        printf("%3d",a[i]);
    printf("\n");
}
void insertArray(int a[],int n,int key)//将Key插入已排好序的数组
{
    int i;
    for (i=n-1;i>=0;i--)//n表示已排好序的个数，
    {
        if(key>a[i])
        {
            a[i+1]=key;
            break;
        }
        else
        {
            a[i+1]=a[i];
        }
    }
}
int main()
{
    int a[N]={1,5,4,3,9,8,7,2};
    int i;
    printArray(a,N);
    for (i=1;i<N;i++)
    {
        insertArray(a,i,a[i]);
    }
    printArray(a,N);

    return 0;
}