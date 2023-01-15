class Solution:
    def totalFruit(self, fruits: List[int]) -> int: 
        length = 0
        j = 0
        count = collections.Counter()
        for i, x in enumerate(fruits):
            count[x] += 1
            while len(count)>=3:
                count[fruits[j]] -= 1
                if count[fruits[j]] == 0:
                    del count[fruits[j]]
                j += 1
            length = max(length, i-j+1)
        
        return length
