#include <stdio.h>
/*
给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，
写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。

输入: nums = [-1,0,3,5,9,12], target = 9     
输出: 4       
解释: 9 出现在 nums 中并且下标为 4     

输入: nums = [-1,0,3,5,9,12], target = 2     
输出: -1        
解释: 2 不存在 nums 中因此返回 -1
*/

//版本一：左闭右闭区间
int search(int* nums, int nums_size, int target)
{
    int left = 0;
    int right = nums_size-1;
    int middle = 0;
    //若left小于等于right，说明区间中元素不为0
    while(left<=right)
    {
        //更新查找下标middle的值
        middle = (left+right)/2;
        //target可能会在[left, middle-1]区间中
        if(nums[middle]>target)
        {
            right = middle-1;
        }
        //target可能在[middle+1,right]区间中
        else if(nums[middle]<target)
        {
            left = middle+1;
        }
        //当前下标元素等于target值时，返回middle
        else if(nums[middle]==target)
        {
            return middle;
        }

    }
    //若未找到，返回-1
    return -1;
}

int main()
{
    int nums[] = {-1,0,3,5,9,12};
    int return_value = -2;
    int nums_size = sizeof(nums)/sizeof(int);
    int target = 9;
    return_value =  search(nums, nums_size, target);
    printf("return value:%d", return_value);
    return 0;
}