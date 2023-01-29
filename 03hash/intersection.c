

int *intersection(int* nums1, int nums1_size, int* nums2, int nums2_size, int *return_size)
{
	int nums1_cnt[1000] = {0};
	int less_size = nums1_size < nums2_size ? nums1_size:nums2_size;
	int * result = (int*) calloc(less_size, sizeof(int));
	int result_index = 0;
	int * temp_nums;
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
