class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        i = 0
        res = list(s)
        n = len(res)
        while i*2*k<=n:
            if n-i*2*k<k:
                left = i*2*k
                right = n-1
            else:
                left = i*2*k
                right = i*2*k+k-1
            while left<right:
                res[left], res[right] = res[right], res[left]
                left += 1
                right -= 1
            i += 1
        return ''.join(res)
