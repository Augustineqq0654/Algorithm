/*使用 printf() 与 %e 输出双精度数*/

#include <stdio.h>

int main()
{
    double d;
    d = 12.001234;
    printf("d 的值为 %le", d);

    return 0;
}