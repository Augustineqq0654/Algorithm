/*

给你一个按非递减顺序排序的整数数组 nums，返回每个数字的平方组成的新数组，
要求也按非递减顺序排序。

示例 1： 输入：nums = [-4,-1,0,3,10] 输出：[0,1,9,16,100]
解释：平方后，数组变为 [16,1,0,9,100]，排序后，数组变为 [0,1,9,16,100]

示例 2： 输入：nums = [-7,-3,2,3,11] 输出：[4,9,9,49,121]

*/

#include <stdio.h>

void sorted_squares(int* nums, int nums_size, int* return_nums)
{
	//返回的数组大小就是原数组大小
	//*return_size = nums_size;
	//创建两个指针，分别指向首尾
	int left = 0;
	int right = nums_size - 1;
	int lsquare,rsquare;

	//最后要返回的结果数组
	//int *ans = (int*) malloc(sizeof(int) * nums_size);
	int index;
	for(index=nums_size-1; index>=0; index--)
	{
		//左指针指向元素的平方
		lsquare = nums[left] * nums[left];
		//右指针指向元素的平方
		rsquare = nums[right] * nums[right];
		//lsquare > rsquare，存到数组中
		if(lsquare>rsquare)
		{
			return_nums[index] = lsquare;
			left++;
		}
		else
		{
			return_nums[index] = rsquare;
			right--;
		}
	}
	//返回结果数组
	//return ans;
}

int main()
{
	int nums[] = {-4,-1,0,3,10};
	int nums_size = sizeof(nums)/sizeof(int);
	int return_nums[nums_size];
	sorted_squares(nums, nums_size, return_nums);

	printf("the sorted square of nums:\t");
	for(int i=0; i<nums_size; i++)
	{
		printf("%d\t", return_nums[i]);
	}
	return 0;
}
