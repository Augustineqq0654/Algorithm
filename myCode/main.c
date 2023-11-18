#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "linear_table.h"

int main()
{
    // 打印表头
    printf("-------linear table-------\n");
    // 初始化线性表
    sequence_table_t sequence_table;
    InitTable(&sequence_table);
    // 插入数据
    InsertTable(&sequence_table, 0, 5);
    InsertTable(&sequence_table, 1, 10);
    InsertTable(&sequence_table, 2, 3);
    InsertTable(&sequence_table, 0, 55);
    InsertTable(&sequence_table, 4, 7);
    // 删除数据
    DeleteTable(&sequence_table, 3);
    // 显示表中数据
    DisplayTable(&sequence_table);

    printf("\n-----------Sort-----------\n");
    // 初始化数组
    int array1[10] = {3, 4, 3, 7, 55, 45, 64, 9, 0, 10};
    int array2[10] = {3, 4, 3, 7, 55, 45, 64, 9, 0, 10};
    int array3[10] = {3, 4, 3, 7, 55, 45, 64, 9, 0, 10};
    int array4[10] = {3, 4, 3, 7, 55, 45, 64, 9, 0, 10};
    int array5[10] = {3, 4, 3, 7, 55, 45, 64, 9, 0, 10};
    // 显示数组
    Display(array1, sizeof(array1)/sizeof(int));
    
    // 插入排序
    InsertSort(array1, sizeof(array1)/sizeof(int));
    // 归并排序
    MySort(array2, sizeof(array2)/sizeof(int));
    // 冒泡排序
    BubbleSort(array3, sizeof(array3)/sizeof(int));

    return 0;
}