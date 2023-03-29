#include <stdio.h>

int main()
{
    char c;
    int is_lowercase_vowel, is_uppercase_vowel;

    printf("输入一个字母：");
    scanf("%c", &c);

    //小写字母元音
    is_lowercase_vowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    //大写字母元音
    is_uppercase_vowel = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if(is_lowercase_vowel || is_uppercase_vowel)
        printf("%c 是元音", c);
    else
        printf("%c 是辅音", c);

    return 0;

}