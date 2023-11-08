#include <stdio.h>
#include "sort.h"

/* 显示 */
void Display(int array[], int length)
{
    for(int i=0; i<length; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
    return;
}

/* 插入排序 */
void InsertSort(int array[], int length)
{
    int j, temp;
    for(int i=1; i<length; i++){
        if(array[i]<array[i-1]){
            j = i;
            while(array[j]<array[j-1] && j>0){
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
                j--;
            }
        }
        Display(array, length);
    }
    return;
}

/* 交换两个数 */
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

/* 我的排序 */
void MySort(int array[], int length)
{
    for(int i=0; i<length-1; i++){
        for(int j=i+1; j<length; j++){
            if(array[i]>array[j]){
                Swap(&array[i], &array[j]);
            }
        }
        Display(array, length);
    }
    return;
}

/* 冒泡排序 */
void BubbleSort(int array[], int length)
{

    return;
}

/* 选择排序 */
void SelectSort(int array[], int length)
{

    return;
}

/* 快速排序 */
void QuickSort(int array[], int length)
{
    return;
}
