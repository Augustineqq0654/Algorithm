/*
给定一个字符串 s 和一个整数 k，从字符串开头算起, 每计数至 2k 个字符，
就反转这 2k 个字符中的前 k 个字符。
如果剩余字符少于 k 个，则将剩余字符全部反转。
如果剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符，
其余字符保持原样。

示例:
输入: s = "abcdefg", k = 2
输出: "bacdfeg"
*/

#include <stdio.h>
#include <string.h>

void reverse_string(char *s, int k)
{
    int len = strlen(s);
    int i;

    for(i=0; i<len; i+=(2*k))
    {
        //判断剩余字符是否小于 k
        k = i+k >len ? len-1 : k;
        
        int left = i;
        int right = i+k-1;
        while(left<right)
        {
            char temp = s[left];
            s[left++] = s[right];
            s[right--] = temp;
        }
    }
//    return s;
}

int main()
{
    char s[] = "abcdefg";
    int k = 2;

    printf("%s\n", s);
    reverse_string(s, k);
    printf("%s\n", s);
    
}