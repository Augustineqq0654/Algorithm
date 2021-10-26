class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        # nums = [i*i for i in nums]
        # nums.sort()
        # return nums
        left, right = 0, len(nums)-1
        size = len(nums)-1
        new_nums = [0 for _ in range(size+1)]
        while left <= right:
            a = nums[left]*nums[left]
            b = nums[right]*nums[right]
            if  a<b :
                new_nums[size] = b
                right -= 1
            else:
                new_nums[size] = a
                left += 1
            size -= 1
        return new_nums
