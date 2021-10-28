class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        # 矩阵初始化
        matrix = [ [0]*n for _ in range(n) ]
        left, right, up, down = 0, n-1, 0, n-1
        number = 1  # 填充的数字

        while left<right and up<down:

            # 从左到右填充
            for i in range(left, right):
                matrix[up][i] = number
                number += 1

            # 从上到下填充
            for j in range(up, down):
                matrix[j][right] = number
                number += 1

            # 从右到左填充
            for x in range(right, left, -1):
                matrix[down][x] = number
                number += 1

            # 从下到上填充
            for y in range(down, up, -1):
                matrix[y][left] = number
                number += 1
            # 下一次边界
            left += 1
            right -= 1
            up += 1
            down -= 1

        # 当 n 为奇数时，单独填充中心点
        if n%2:
            matrix[n//2][n//2] = number

        return matrix
