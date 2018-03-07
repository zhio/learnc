#include<stdio.h>
 int find_bin(int a[],int n,int key)
 {
     int low=0,high=n-1,mid;
     while(low<=high)
     {
         mid=(low+high)/2;
         if(key==a[mid])
            return mid;
        if(key<a[mid])
            high=mid-1;
        else
            low=mid+1;
     }
     return -1;
 }

 void main()
 {
     int i;
     int a[10]={15,26,37,45,48,52,60,66,73,90};
     int f;
     f=find_bin(a,10,37);
     if(f!=-1)
        printf("查找成功，下标为%d\n",f);
    else
        printf("查找失败！\n");
 }