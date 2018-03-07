#include<stdio.h>

float Sin(float x)
{
    float s;
    float t;
    int n;

    t = x;
    s = t;
    for (n=2;n<1000;n++)
    {
        t = -1 * t * x * x/((2*n-1)*(2*n-2));
        s = s +t;
    }
}
int main()
{
    
    float x;//输入的角度
    x=3.1415926;
    printf ("%f\n",Sin(x));
}