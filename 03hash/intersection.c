#include <stdio.h>
#include <stdlib.h>

//两个数组的交集
int *intersection(int* nums1, int nums1_size, int* nums2, int nums2_size, int *return_size)
{
	int nums1_cnt[100] = {0};
	int less_size = nums1_size < nums2_size ? nums1_size:nums2_size;
	int *result = (int*)calloc(less_size, sizeof(int));
	int result_index = 0;
	//int * temp_nums;
	int i;

	for(i=0; i<nums1_size; i++)
	{
		nums1_cnt[nums1[i]]++;
	}

	for(i=0; i<nums2_size; i++)
	{
		if(nums1_cnt[nums2[i]]>0)
		{
			result[result_index] = nums2[i];
			result_index++;
			//避免重复
			nums1_cnt[nums2[i]] = 0;
		}
	}
	*return_size = result_index;
	return result;
}

int main()
{
	int nums1[] = {4, 9, 5};
	int nums2[] = {9, 4, 9, 8, 4};
	int nums1_size = sizeof(nums1)/sizeof(int);
	int nums2_size = sizeof(nums2)/sizeof(int);
	//int temp = 0;
	//int *return_size = &temp;
	//int *return_size = malloc(sizeof(int));
	int return_size = 0;

	//printf("nohao\n");
	int *nums1_and_nums2 = NULL;
	nums1_and_nums2 = intersection(nums1, nums1_size, nums2, nums2_size, &return_size);
	//printf("nohao\n");
	printf("%d\n", return_size);
	for(int i=0; i<return_size; i++)
	{
		printf("%d\t", *nums1_and_nums2);
		nums1_and_nums2++;
	}

	return 0;
}
