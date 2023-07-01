#include <stdio.h>

#define LEN 8

int main()
{
    char *blocks[] = {"██", "  "};  // utf-8字符：9608，32
    int  i, j;
    for(i=0; i<LEN; i++)  // 行循环
    {
        for(j=0; j<LEN; j++)  // 列循环
            printf("%s", blocks[(i+j)%2]);
        putchar('\n');
    }
    return 0;
}