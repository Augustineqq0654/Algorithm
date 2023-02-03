/*
编写一个算法来判断一个数 n 是不是快乐数。
「快乐数」定义为：对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和，
然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。如果 可以变为  1，那么这个数就是快乐数。
如果 n 是快乐数就返回 True ；不是，则返回 False 。

示例：
输入：19	输出：true
解释：
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//判断是否快乐数
bool is_happy(int n)
{
	int hash[5000];
	memset(hash,0,sizeof(hash));
	while(true)
	{
		int res = 0;
		while(n)
		{
			int a = (n%10);
			res += a*a;
			n /= 10;
		}
		if(res == 1) return true;
		if(++hash[res] > 2) return false;
		n = res;
	}
}

int main()
{
	int num = 888;
	bool result = is_happy(num);
	printf("%d\n", result);
	return 0;
}
