#include <stdio.h>

int main()
{
    int i, n, t1=0, t2=1, next_term;

    printf("输出几项：");
    scanf("%d", &n);

    printf("斐波那契数列：");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", t1);
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    printf("\n");

    return 0;
}