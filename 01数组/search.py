class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums)-1
        while left <= right:
            temp = left+(right-left)//2
            if nums[temp] == target:
                return(temp)
            elif nums[temp] > target:
                right = temp-1
            else:
                left = temp+1
        else:
            return -1
# test
