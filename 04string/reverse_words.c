/*
给定一个字符串，逐个翻转字符串中的每个单词。
示例 1：
输入: "the sky is blue"
输出: "blue is sky the"
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverse_words(char* s)
{
    int len = strlen(s);
    char *res = (char*) malloc((len+1)*sizeof(char));
    int index=0, j=len-1, i;

    while(j>=0&&s[j]==' ')j--;  // 正好找到第一个字母
    if(j<0)
    {
        res[index++] = '\0';
        return res;
    }

    while(j>=0)
    {
        i=j;
        while(i>=0&&s[i]!=' ')i--;  //找到前面一个空格或 -1
        if(i==j)
        {
            res[index++] = '\0';
            return res;
        }
        for(int k=i+1; k<=j; k++)
            res[index++] = s[k];
        j = i-1;
        while(j>=0 && s[j]==' ')j--;
        if(i>0 && j>=0)
            res[index++] = ' ';
        else
        {
            res[index++] = '\0';
            return res;
        }
    }
    return NULL;
}

int main()
{
    char s[] = "the sky is blue!";
    printf("%s\n", s);
    char *p = reverse_words(s);
    printf("%s\n", p);
    return 0;
}