#include <stdio.h>

#define LEN 5

int main()
{
    int i, j;
    char *gray_block = "█",      // utf-8字符：9608
         *textured_block = "▒";  // utf-8字符：9618
    for(i=0; i<LEN; i++)  // 行循环
    {
        for(j=0; j<LEN; j++)  // 列循环
            if(i==j || i+j==LEN-1) printf("%s", gray_block);
            else printf("%s", textured_block);
        putchar('\n');  // 换行
    }
    return 0;
}