class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        arr = [0]*26
        for s in magazine:
            arr[ord(s)-ord('a')] += 1
        
        for s in ransomNote:
            if arr[ord(s)-ord('a')] == 0:
                return False
            else:
                arr[ord(s)-ord('a')] -= 1
        return True
