#include <stdio.h>
#include <stdbool.h>

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
