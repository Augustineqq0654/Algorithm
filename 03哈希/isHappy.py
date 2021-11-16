class Solution:
    def isHappy(self, n: int) -> bool:
        def caculate(sum):
            temp = 0 
            while sum > 0:
                ge = sum%10
                temp += ge**2
                sum = sum//10
            return temp

        record = set()
        while 1:
            n = caculate(n)
            if n == 1:
                return True
            if n in record:
                return False
            else:
                record.add(n)
