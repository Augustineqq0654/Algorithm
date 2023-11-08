#include <stdio.h>
#include <stdlib.h>
#include "linear_table.h"

/* 初始化 */
void InitTable(sequence_table_t *sequence_table)
{
    sequence_table->data = (elementType *)malloc(sizeof(elementType)*SIZE);
    if(sequence_table->data == NULL){
        return;
    }
    sequence_table->size = SIZE;
    sequence_table->length = 0;
    return;
}

/* 显示 */
void DisplayTable(sequence_table_t *sequence_table)
{
    printf("the element in sequence table is:\n");
    for(int i=0; i<sequence_table->length; i++){
        printf("%d\t", sequence_table->data[i]);
    }
}

/* 插入元素 */
int InsertTable(sequence_table_t *sequence_table, int index, int value)
{
    if(index<0 || index>sequence_table->size){
        return -1;
    }
    for(int i=sequence_table->length; i>index; i--){
        sequence_table->data[i] = sequence_table->data[i-1];
    }
    sequence_table->data[index] = value;
    sequence_table->length++;
    return 0;
}

/* 删除元素 */
int DeleteTable(sequence_table_t *sequence_table, int index)
{
    if(index<0 || index>sequence_table->length){
        return -1;
    }
    for(int i=index; i<sequence_table->length-1; i++){
        sequence_table->data[i] = sequence_table->data[i+1];
    }
    sequence_table->length--;
    return 0;
}
