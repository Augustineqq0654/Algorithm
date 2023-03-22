/*使用 printf() 与 %d 格式化输出整数*/

#include <stdio.h>

int main()
{
    int number;

    printf("输入一个整数：");
    scanf("%d", &number);
    printf("输入的整数是：%d", number);
    
    return 0;
}