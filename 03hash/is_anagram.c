#include <stdio.h>
#include <stdlib.h>

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
