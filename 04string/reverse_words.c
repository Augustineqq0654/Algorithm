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

// 反转字符串
void reverse(char*s, int start, int end)
{
    while(start<end)
    {
        char temp = s[start];
        s[start++] = s[end];
        s[end--] = temp;
    }
}

char * reverseWords(char* s)
{
    // 1. 移除多余空格
    int len = strlen(s);
    int fast = 0, slow = 0;

    // 移除字符串之前的空格
    while(s[fast]==' ')
        fast++;
    // 移除单词之间多余的空格
    while(fast<len-1)
    {
        if(s[fast]==' ' && s[fast+1]==' ')
        {
            fast++;
        }
        else{
            s[slow++] = s[fast++];
        }
    }
    // 移除字符串后面的空格
    if(s[fast]==' ')
        s[slow] = '\0';
    else{
        s[slow++] = s[fast];
        s[slow] = '\0';
    }

    // 反转整个字符串
    reverse(s, 0, slow-1);

    // 3. 反转每一个单词
    for(int i=0; i<slow; i++)
    {
        int j = i;
        while(j<slow && s[j]!=' ')
            j++;
        reverse(s, i, j-1);
        i = j;
    }
    return s;
}

int main()
{
    char s[] = "the sky is blue!";
    printf("%s\n", s);
    char *p = reverse_words(s);
    printf("%s\n", p);
    char *r_s = reverseWords(s);
    printf("%s\n", r_s);
    return 0;
}