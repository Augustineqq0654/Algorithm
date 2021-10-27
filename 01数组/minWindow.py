class Solution:
    def minWindow(self, s: str, t: str) -> str:
        t_hash = collections.Counter()
        s_hash = collections.Counter()
        for t_char in t:
            t_hash[t_char] += 1
        t_count = len(t)
        i = 0
        res = (0,float('inf'))

        for j, char in enumerate(s):
            s_hash[char] += 1
            if t_hash[char] > 0:
                t_count -= 1
            t_hash[char] -= 1
            while t_count <= 0:
                s_hash[s[i]] -= 1
                if j-i+1 < res[1]-res[0]:
                    res = (i,j+1)
                if t_hash[s[i]] >= 0:
                    t_count += 1
                t_hash[s[i]] += 1
                i += 1
        return "" if res==(0,float('inf')) else s[res[0]:res[1]]
