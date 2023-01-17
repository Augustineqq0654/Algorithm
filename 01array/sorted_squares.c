/*

给你一个按 非递减顺序排序的整数数组 nums，返回每个数字的平方组成的新数组，
要求也按非递减顺序排序。

示例 1： 输入：nums = [-4,-1,0,3,10] 输出：[0,1,9,16,100] 
解释：平方后，数组变为 [16,1,0,9,100]，排序后，数组变为 [0,1,9,16,100]

示例 2： 输入：nums = [-7,-3,2,3,11] 输出：[4,9,9,49,121]

*/

#include <stdio.h>

int* sorted_squares(int* nums, int nums_size, int* return_size)
{
	//返回的数组大小就是原数组大小
	*return_size = nums_size;
	//创建两个指针，分别指向首尾
	int left = 0;
	int right = nums_size - 1;
	
	//最后要返回的结果数组
	int *ans = (int*) malloc(sizeof(int) * nums_size);
	int index;
	for(index=nums_size-1; index>=0; index--)
	{
		//左指针指向元素的平方
		int lsquare = nums[left] * nums[left];
		//右指针指向元素的平方
		int rsquare = nums[right] * nums[right];
		//lsquare > rsquare，存到数组中
		if(lsquare>rsquare)
		{
			ans[index] = lsqare;
			left++;
		}
		else
		{
			ans[index] = rsquare;
			right--;
		}
	}
	//返回结果数组
	return ans;
}
