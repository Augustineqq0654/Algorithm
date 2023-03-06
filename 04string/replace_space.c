/*
请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
示例 1： 输入：s = "We are happy."
输出："We%20are%20happy."
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * replace_space(char* s)
{
    // 统计空格数量
    int count = 0;
    int len = strlen(s);
    int i = 0, j = 0;
    for(i=0; i<len; i++)
    {
        if(s[i] == ' ')
            count++;
    }
    
    //为新数组分配空间
    int new_len = len + count*2;
    char* result = malloc(sizeof(char) * new_len + 1 );

    //填充新数组并替换空格
    for(i=len-1, j=new_len-1; i>=0; i--,j--)
    {
        if(s[i] != ' ')
            result[j] = s[i];
        else
        {
            result[j--] = '0';
            result[j--] = '2';
            result[j] = '%';
        }
    }
    result[new_len] = '\0';

    return result;
}

int main()
{
    char s[] = "We are happy!";
    printf("%s\n", s);
    char *p =replace_space(s);
    printf("%s\n", p);
    
}