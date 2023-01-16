class Solution:
    def replaceSpace(self, s: str) -> str:
        counter = s.count(' ')
        res = list(s)
        # res.extend([' ']*counter*2)
        res += [' ']*counter*2
        left, right = len(s)-1, len(res)-1

        while left >= 0:
            if res[left] == ' ':
                res[right] = '0'
                res[right-1] = '2'
                res[right-2] = '%'
                right -= 3
                left -= 1
            else:
                res[right] = res[left]
                left -= 1
                right -= 1
        
        return ''.join(res)
