/*
给定一个赎金信 (ransom) 字符串和一个杂志(magazine)字符串，判断第一个字符串 ransom 能不能
由第二个字符串 magazines 里面的字符构成。如果可以构成，返回 true ；否则返回 false。
(题目说明：为了不暴露赎金信字迹，要从杂志上搜索各个需要的字母，组成单词来表达意思。
杂志字符串中的每个字符只能在赎金信字符串中使用一次。)

注意：
你可以假设两个字符串均只含有小写字母。
canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool can_construct(char *ransom_note, char *magazine)
{
    int hash[26] = {0};
    if(strlen(ransom_note) > strlen(magazine))
        return false;
    for(int i=0; i<strlen(magazine); i++)
    {
        hash[magazine[i]-'a']++;
    }
    for(int i=0; i<strlen(ransom_note); i++)
    {
        hash[ransom_note[i]-'a']--;
        if(hash[ransom_note[i]-'a']<0)
            return false;
    }
    return true;
}

int main()
{
    char ransom_note[] = "helloworld";
    char magazine[] = "worldnihao";
    bool result = can_construct(ransom_note, magazine);
    printf("result:%d\n", result);
    return 0;
}