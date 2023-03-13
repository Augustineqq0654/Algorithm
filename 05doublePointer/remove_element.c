#include <stdio.h>

int remove_element(int* nums, int nums_size, int val)
{
    int slow=0, fast=0;
    for(fast=0; fast<nums_size; fast++)
    {
        // 若快指针位置的元素不等于要删除的元素
        if(nums[fast] != val)
            nums[slow++] = nums[fast];
    }
    return slow;
}

int main()
{
    int nums[] = {2, 3, 4, 3, 5, 6, 2, 7};
    int nums_size = sizeof(nums)/sizeof(int);
    int val = 2;

    int ret = remove_element(nums, nums_size, val);
    printf("ret=%d\n", ret);
    for(int i=0; i<ret; i++)
        printf("%d\t", nums[i]);
}