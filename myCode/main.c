#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "linear_table.h"

int main()
{
    printf("-------linear table-------\n");
    sequence_table_t sequence_table;
    InitTable(&sequence_table);
    InsertTable(&sequence_table, 0, 5);
    InsertTable(&sequence_table, 1, 10);
    InsertTable(&sequence_table, 2, 3);
    InsertTable(&sequence_table, 0, 55);
    InsertTable(&sequence_table, 4, 7);
    DeleteTable(&sequence_table, 3);
    DisplayTable(&sequence_table);

    printf("\n-----------Sort-----------\n");
    int array1[10] = {3, 4, 3, 7, 55, 45, 64, 9, 0, 10};
    int array2[10] = {3, 4, 3, 7, 55, 45, 64, 9, 0, 10};
    int array3[10] = {3, 4, 3, 7, 55, 45, 64, 9, 0, 10};
    int array4[10] = {3, 4, 3, 7, 55, 45, 64, 9, 0, 10};
    int array5[10] = {3, 4, 3, 7, 55, 45, 64, 9, 0, 10};
    Display(array1, sizeof(array1)/sizeof(int));
    
    InsertSort(array1, sizeof(array1)/sizeof(int));
    MySort(array2, sizeof(array2)/sizeof(int));
    BubbleSort(array3, sizeof(array3)/sizeof(int));

    return 0;
}
