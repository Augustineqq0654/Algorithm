class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        records = dict()
        
        for idx, val in enumerate(nums):
            if val in records:
                return [records[val], idx]
            else:
                records[target-val] = idx
