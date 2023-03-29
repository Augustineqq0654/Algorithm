#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, d;
    printf("输入方程的三个系数：");
    scanf("%f %f %f", &a, &b, &c);
    if(a!=0)
    {
        d = sqrt(b*b-4*a*c);
        x1 = (-b+d)/(2*a);
        x2 = (-b-d)/(2*a);
        if(x1<x2)
            printf("x1=%.2f,x2=%.2f", x1, x2);
        else
            printf("x1=%.2f,x2=%.2f", x2, x1);
    }
    return 0;
}