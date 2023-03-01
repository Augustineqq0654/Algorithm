

int comp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int ** four_sum(int* nums, int nums_size, int target, int* return_size, int** return_column_sizes)
{
    int** quadruplets = malloc(sizeof(int*) * 1001);
    *return_size = 0;
    *return_column_sizes = malloc(sizeof(int) * 1001);
    if(nums_size<4){
        return quadruplets;
    }
    qsort(nums, nums_size, sizeof(int), comp);
    int length = nums_size;
    for(int i=0; i<length-3; i++)
    {
        if(i>0 && nums[i] == nums[i-1])
            continue;
        if((long) nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target)
            break;
        if((long) nums[i]+nums[length-3]+nums[length-2]+nums[length-1]<target)
            continue;
        for(int j=i+1; j<length-2; j++)
        {
            if(j>i+1&&nums[j]==nums[j-1])
                continue;
            if((long) nums[i]+nums[j]+nums[j+1]+nums[j+2]>target)
                break;
            if((long)nums[i]+nums[j]+nums[length-2]+nums[length-1]<target)
                continue;
            int left = j+1, right = length - 1;
            while(left<right)
            {
                long sum = (long) nums[i]+nums[j]+nums[left]+nums[right];
                if(sum == target)
                {
                    int* tmp = malloc(sizeof(int)*4);
                    tmp[0] = nums[i], tmp[1] = nums[j], tmp[2] = nums[left], tmp[3]=nums[right];
                    (*return_column_sizes)[(*return_size)] = 4;
                    quadruplets[(*return_size)++] = tmp;
                    while(left<right && nums[left] == nums[left+1])
                        left++;
                    left++;
                    while(left<right && nums[right]==nums[right-1])
                        right--;
                    right--;
                }
                else if(sum<target)
                    left++;
                else
                    right--;
            }
                
            
        }

    }
    return quadruplets;
}