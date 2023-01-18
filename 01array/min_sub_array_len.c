/*
给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的连续子数组，
并返回其长度。如果不存在符合条件的子数组，返回 0。
示例：
输入：s = 7, nums = [2,3,1,2,4,3] 输出：2 解释：子数组 [4,3] 是该条件下的长度最小的子数组。
*/

#include <stdio.h>

//滑动窗口
int min_sub_array_len(int target, int *nums, int nums_size)
{
    int INT_MAX = nums_size+1;
    //初始化最小长度为INT_MAX
    int min_length = INT_MAX;
    int sum = 0;

    int left = 0, right = 0;
    //右边界向右扩展
    for(; right<nums_size; right++)
    {
        sum += nums[right];
        //当sum的值大于等于target时，保存长度，并且收缩左边界
        while(sum >= target)
        {
            int sub_length = right - left + 1;
            min_length = min_length<sub_length?min_length:sub_length;
            sum -= nums[left++];
        }
    }
    //若min_length不为INT_MAX，则返回min_length
    return min_length == INT_MAX?0:min_length; 
}

int main()
{
    int nums[] = {2,3,1,2,4,3};
    int target = 7;
    int nums_size = sizeof(nums)/sizeof(int);

    int length = min_sub_array_len(target, nums, nums_size);
    printf("length:%d\n", length);
}
