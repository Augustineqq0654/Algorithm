#include <stdio.h>

int main()
{
    //三个数中的最大值
    int a = 100;
    int b = 200;
    int c = 300;
    int max = a;
    if (max < b)    max = b;
    if (max < c)    max = c;

    printf("max = %d\n", max);  //输出最大值

    double n1, n2, n3;
    printf("请输入三个数，以空格分隔：");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if(n1>=n2 && n1>=n3)
        printf("%.2f 是最大数", n1);
    
    if(n2>=n1 && n2>=n3)
        printf("%.2f 是最大数", n2);

    if(n3>=n1 && n3>=n2)
        printf("%.2f 是最大数", n3);

    return 0;
}