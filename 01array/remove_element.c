#include <stdio.h>

/*
给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，
并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并原地修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

示例 1: 给定 nums = [3,2,2,3], val = 3, 函数应该返回新的长度 2,
并且 nums 中的前两个元素均为 2。 你不需要考虑数组中超出新长度后面的元素。

示例 2: 给定 nums = [0,1,2,2,3,0,4,2], val = 2, 函数应该返回新的长度 5,
并且 nums 中的前五个元素为 0, 1, 3, 0, 4。
*/

int remove_element(int* nums, int nums_size, int val)
{
    int slow = 0;
    for(int fast=0; fast<nums_size; fast++)
    {
        //若快指针位置的元素不等于要删除的元素
        if(nums[fast] != val)
        {
            //将其挪到慢指针指向的位置，慢指针+1
            nums[slow++] = nums[fast];
        }
    }
    //最后慢指针的大小就是数组的大小
    return slow;
}

int main()
{
    int nums[] = {3,2,2,3};
    int val = 3;
    int nums_size = sizeof(nums)/sizeof(int);
    int length = remove_element(nums, nums_size, val);
    printf("新数组的长度为%d \n",length);
    return 0;
}
