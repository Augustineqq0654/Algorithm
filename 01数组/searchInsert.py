class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums)-1
        while left <= right:
            temp = left+(right-left)//2
            if nums[temp] == target:
                return temp
            elif nums[temp] > target:
                right = temp-1
            else:
                left = temp+1
        return right+1
