/*
给你一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，
使得 a + b + c = 0 ？请你找出所有满足条件且不重复的三元组。
注意： 答案中不可以包含重复的三元组。
示例：
给定数组 nums = [-1, 0, 1, 2, -1, -4]，
满足要求的三元组集合为： [ [-1, 0, 1], [-1, -1, 2] ]
*/

int cmp(const void* pa, const void* pb)
{
	int a=*(int*)pa;
	int b=*(int*)pb;
	return a>b?1:-1;
}

int **three_sum(int* nums, int nums_size, int* return_size, int ** return_column_sizes)
{
	int base = 100;	//数组初始长度
	int **res=(int**)malloc(sizeof(int*)*base);
	*return_column_sizes = (int*)malloc(sizeof(int)*base);
	*return_size=0;
	int i, j, k;
	//排序
	qsort(nums, nums_size, sizeof(int), cmp);
	for(i=0; i<nums_size; i++)
	{
		//先确定第三个数的值，再对剩下的两个数进行两数之和的操作
		//若本次的第三个数与上一次的情况相同，则跳过这个数
		if(i>0&&nums[i]==nums[i-1])
			continue;
		//给定nums[i]，以j,k作为双指针进行两数之和操作
		j=i+1;
		k=nums_size-1;
		while(j<k)
		{
			int sum=nums[i]+nums[j]+nums[k];
			if(sum==0)
			{
				res[*return_size]=(int*)malloc(sizeof(int)*3);
				//每一个数组大小都为3
				(*return_column_sizes)[*return_size]=3;
				//给申请的空间赋值
				res[*return_size][0]=nums[i];
				res[*return_size][1]=nums[j];
				res[*return_size][2]=nums[k];
				//二维数组的行数加1
				(*return_size)++;
				//如果二维数组的大小达到初始设定的行数，则进行扩容
				if(*return_size==base)
				{
					base*=2;
					res=(int**)realloc(res, sizeof(int*)*base);
					*return_column_sizes=(int*)realloc(*return_column_sizes,sizeof(int)*base);
				}
				//记录符合要求的个数，进行去重
				int num1=nums[j], num2=nums[k];
				while(nums[j]==num1&&j<k)
					j++;
				while(nums[k]==num2&&j<k)
					k--;
			}
			//若三个数之和小于0，则左边的指针右移
			else if(sum<0)
				j++;
			//若三个数之和大于0，则右边的指针左移
			else k--;
		}
	}
	return res;
}
