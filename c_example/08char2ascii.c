#include <stdio.h>

int main()
{
    char c;
    printf("输入一个字符：");

    scanf("%c", &c);

    printf("%c 的 ASCII 为 %d", c, c);
    return 0;
}