#include <stdio.h>

void reverse_sentence();

int main()
{
    printf("请输入一个字符串：");
    reverse_sentence();

    return 0;
}

void reverse_sentence()
{
    char c;
    scanf("%c", &c);

    if(c!= '\n')
    {
        reverse_sentence();
        printf("%c", c);
    }
}