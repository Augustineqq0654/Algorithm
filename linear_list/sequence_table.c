#include <stdio.h>
#include <stdlib.h>

#define Size 5

typedef struct Table{
    int *head;
    int length;
    int size;
}table;

table initTable(){
    table t;
    t.head = (int *)malloc(sizeof(int)*Size);
    if(t.head == NULL)
    {
        printf("Error: memory allocation failed\n");
        exit(1);
    }
    t.length = 0;
    t.size = Size;
    return t;
}

//输出顺序表中的元素
void displayTable(table t){
    for(int i=0; i<t.length; i++)
        printf("%d ", t.head[i]);
    printf("\n");
}

//插入元素
void insertTable(table *t, int value)
{
    if(t->length == t->size)
    {
        printf("Error: out of memory\n");
        exit(1);
    }
    t->head[t->length] = value;
    t->length++;
}

int main(){
    table t=initTable();
    //向顺序表中添加元素
    for(int i=0; i<Size-2; i++)
    {
        t.head[i] = i;
        t.length++;
    }
    insertTable(&t, 100);
    insertTable(&t, 200);
    printf("顺序表中的元素分别是：\n");
    displayTable(t);
    return 0;
}