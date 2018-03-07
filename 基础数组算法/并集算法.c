#include<stdio.h>

int main()
{
    int a[]={1,2,3,8,12,15};
    int b[]={2,3,7,9};
    int c[20];
    int i;
    int numberA=6;
    int numberB=4;
    int pa,pb,pc;
    pa=pb=pc=0;

    while(pa<numberA||pb<numberB)
    {
        if(pa<numberA&&pb<numberB)
        {
            if(a[pa]<b[pb])
            {
                c[pc]=a[pa];
                pc++;
                pa++;
            }
            else if(a[pa]>b[pb])
            {
                c[pc]=b[pb];
                pc++;
                pb++;
            }
            else if(a[pa]==b[pb])
            {
                c[pc]=a[pb];
                pc++;
                pa++;
                pb++;
            }

        }
        else if (pa==numberA)
        {
            c[pc]=b[pb];
            pc++;
            pb++;
        }
        else if (pb==numberB)
        {
            c[pc]=a[pa];
            pc++;
            pa++;
        }
    }
    for (i=0;i<20;i++)
        printf("%3d",c[i]);
    printf("\n");
    return 0;
}