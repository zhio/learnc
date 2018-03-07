#include <stdio.h>
#define N 30
#define SPACE 32

void main(vodi)
{
    int a[N][N]={0};
    int i,j,n;

    printf("输入杨辉三角的阶数：");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        a[i][0]=1;
    for(i=0;i<n;i++)
        a[i][i]=1;

    for(i=1;i<n;i++)
        for(j=1;j<i;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    
    for(i=0;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            printf("%3c",SPACE);
        
            for(j=0;j<=i;j++)
            {
                printf("%3d",a[i][j]);
                printf("%3c",SPACE);
            }
            printf("\n");
        }
}