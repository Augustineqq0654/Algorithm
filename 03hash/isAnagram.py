class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        record = [0]*26
        for i in range(len(s)):
            record[ord(s[i])-ord('a')] += 1
        for j in range(len(t)):
            record[ord(t[j])-ord('a')] -= 1

        for i in range(len(record)):
            if record[i] != 0:
                return False
        return True
