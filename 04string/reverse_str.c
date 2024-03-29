/*
编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 char[] 的形式给出。
不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。
你可以假设数组中的所有字符都是 ASCII 码表中的可打印字符。

示例 1：
输入：["h","e","l","l","o"]
输出：["o","l","l","e","h"]
*/

#include <stdio.h>
#include <string.h>

void reverse_str(char* s, int size)
{
    int left = 0;
    int right = size-1;
    char temp;

    while(left<right)
    {
        temp = s[left];
        s[left++] = s[right];
        s[right--] = temp;

    }
}

int main()
{
    char s[] = "hello,world";
    //int size = sizeof(s)/sizeof(char);  sizeof 会计算字符串结束符
    int size = strlen(s);

    printf("%s\n", s);
    reverse_str(s, size);
    printf("---------------\n");
    printf("%s\n", s);
    return 0;
}