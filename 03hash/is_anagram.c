/*
给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。
示例 1: 输入: s = "anagram", t = "nagaram" 输出: true
示例 2: 输入: s = "rat", t = "car" 输出: false
说明: 你可以假设字符串只包含小写字母
*/

#include <stdio.h>
#include <stdlib.h>

//判断是否是字母异位词
int is_anagram(char *s, char *t)
{
	int record[26] = {0};
	while(*s != '\0')
	{
		record[*s - 'a']++;
		s++;
	}

	while(*t != '\0')
	{
		record[*t - 'a']--;
		t++;
	}

	for(int i=0; i<26; i++)
	{
		if(record[i] != 0)
			return 0;
	}
	return 1;
}

int main()
{
	char s[] = "anagram";
	char t[] = "nagaram";
	int result = is_anagram(s, t);
	printf("%d\n", result);
}
