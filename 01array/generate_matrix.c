/*
给定一个正整数 n，生成一个包含 1 到 n^2 所有元素，且元素按顺时针顺序螺旋排列的正方形矩阵。
示例:
输入: 3 输出: [ [ 1, 2, 3 ], [ 8, 9, 4 ], [ 7, 6, 5 ] ]
*/

#include <stdio.h>

int ** generate_matrix(int n, int* return_size, int** return_column_sizes)
{
    //初始化返回的结果数组的大小
    *return_size = n;
    *return_column_sizes = (int*)malloc(sizeof(int)*n);
    //初始化返回结果数组ans
    int ** ans = (int**)malloc(sizeof(int*)*n);
    int i;
    for(i=0; i<n; i++)
    {
        ans[i] = (int*)malloc(sizeof(int)*n);
        (*return_column_sizes)[i] = n;
    }

    
}