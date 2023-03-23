#include <stdio.h>
// 格式控制字符  %d  %f(%lf)  %s  %c  %x  %e
int main()
{
    double first_number, second_number, product;
    printf("请输入两个浮点数：");
    scanf("%lf %lf", &first_number, &second_number);
    product = first_number * second_number;
    printf("结果 = %.2lf", product);

    return 0;
}