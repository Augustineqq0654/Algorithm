/*
给定四个包含整数的数组列表 A , B , C , D ,
计算有多少个元组 (i, j, k, l) ，使得 A[i] + B[j] + C[k] + D[l] = 0。

为了使问题简单化，所有的 A, B, C, D 具有相同的长度 N，
且 0 ≤ N ≤ 500 。所有整数的范围在 -2^28 到 2^28 - 1 之间，
最终结果不会超过 2^31 - 1 。
输入:
A = [ 1, 2]
B = [-2,-1]
C = [-1, 2]
D = [ 0, 2]
输出:
2
*/

#include <stdio.h>
#include <stdlib.h>
#include <uthash.h>

struct hash_table{
	int key;
	int val;
	UT_hash_handle hh;
};

int four_sum_count(int *A, int A_size, int *B, int B_size, \
	int *C, int C_size, int *D, int D_size)
{
	struct hash_table* hashtable = NULL;
	for(int i=0; i<A_size; i++)
	{
		for(int j=0; j<B_size; j++)
		{
			int ikey = A[i]+B[j];
			struct hash_table* tmp;
			HASH_FIND_INT(hashtable, &ikey, tmp);
			if(tmp==NULL)
			{
				struct hash_table* tmp = malloc(sizeof(struct hash_table));
				tmp->key = ikey, tmp->val = 1;
				HASH_ADD_INT(hashtable, key, tmp);
			}
			else
				tmp->val++;
		}
	}

	int ans = 0;
	for(int i=0; i<C_size; i++)
	{
		for(int j=0; j<D_size; j++)
		{
			int ikey = -C[i]-D[j];
			struct hash_table* tmp;
			HASH_FIND_INT(hashtable, &ikey, tmp);
			if(tmp!=NULL)
				ans += tmp->val;
		}
	}
	return ans;
}

int main()
{
	int A[] = {1, 2};
	int B[] = {-2, -1};
	int C[] = {-1, 2};
	int D[] = {0, 2};
	int A_size = sizeof(A)/sizeof(int);
	int B_size = sizeof(B)/sizeof(int);
	int C_size = sizeof(C)/sizeof(int);
	int D_size = sizeof(D)/sizeof(int);
	int result = four_sum_count(A, A_size, B, B_size, C, C_size, D, D_size);
	printf("%d", result);
	return 0;
}
