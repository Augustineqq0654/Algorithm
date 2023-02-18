class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        n = len(nums)
        res = []

        for i in range(n):
            if i>0 and nums[i]==nums[i-1]:
                continue
            for j in range(i+1,n):
                if j>i+1 and nums[j]==nums[j-1]:
                    continue
                p = j+1
                q = n-1
                val = target-nums[i]-nums[j]
                while p<q:
                    if nums[p]+nums[q] > val:
                        q -= 1
                    elif nums[p]+nums[q] < val:
                        p += 1
                    else:
                        res.append([nums[i],nums[j],nums[p],nums[q]])
                        while p<q and nums[p]==nums[p+1]:
                            p += 1
                        while p<q and nums[q]==nums[q-1]:
                            q -= 1
                        p += 1
                        q -= 1
        return res
