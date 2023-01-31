/*
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，
并返回他们的数组下标。
给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/

#include <stdio.h>
#include <stdlib.h>

int *two_sum(int *nums, int nums_size, int target, int *return_size)
{
    for(int i=0; i<nums_size; i++)
    {
        for(int j=i+1; j<nums_size; j++)
        {
            if(nums[i]+nums[j] == target)
            {
                int *ret = malloc(sizeof(int)*2);
                ret[0]=i, ret[1]=j;
                *return_size = 2;
                return ret;
            }
        }
    }
    *return_size = 0;
    return NULL;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int nums_size = sizeof(nums)/sizeof(int);
    int return_size;
    int *return_nums = two_sum(nums, nums_size, target, &return_size);
    for(int i=0; i<return_size; i++)
    {
        printf("%d\t", return_nums[i]);
    }
    return 0;
}