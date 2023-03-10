/*
字符串的左旋转操作是把字符串前面的若干个字符转移到字符串的尾部。
请定义一个函数实现字符串左旋转操作的功能。比如，输入字符串"abcdefg"和数字2，
该函数将返回左旋转两位得到的结果"cdefgab"。

示例 1：
输入: s = "abcdefg", k = 2
输出: "cdefgab"
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*********函数声明********/
char* reverse(char* s, int start, int end);

// 方法一：申请空间，分段赋值
char* reverse_left_words(char* s, int n)
{
    int len = strlen(s);
    char* result = malloc(sizeof(char)*len+1);
    int count = 0;
    for(int i=n; i<len; i++)
    {
        result[count++] = s[i];
    }
    for(int i=0; i<n; i++)
    {
        result[count++] = s[i];
    }
    result[count] = '\0';
    return result;
}

// 方法二：分三次反转
char* reverse(char* s, int start, int end)
{
    char temp;
    while(start<end)
    {
        temp = s[start];
        s[start++] = s[end];
        s[end--] = temp;
    }
    return s;
}

char* reverseLeftWords(char* s, int n)
{
    int len =strlen(s);
    // 反转前 n 个字符
    s = reverse(s, 0, n-1);
    // 反转 n+1 到末尾的字符
    s = reverse(s, n, len-1);
    // 反转整个字符串
    s = reverse(s, 0, len-1);
    return s;
}

int main()
{
    char s[] = "abcdefg";
    int  k = 2;
    printf("%s\n", s);
    char* back = reverse_left_words(s, k);
    printf("%s\n", back);
    char* back_s = reverseLeftWords(s, k);
    printf("%s\n", s);
    printf("%s\n", back_s);

}