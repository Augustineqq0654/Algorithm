class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        left = 0
        Sum = 0
        length = float('inf')

        for i in range(len(nums)):
            Sum += nums[i]
            while Sum>=target:
                length = min(length, i-left+1)
                Sum -= nums[left]
                left += 1
        return 0 if length==float('inf') else length
