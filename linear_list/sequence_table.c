#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 5

typedef struct Table{
    int *head;//声明了一个名为head的长度不确定的数组，也叫“动态数组”
    int length;//记录当前顺序表的长度
    int size;//记录顺序表分配的存储容量
}table;

/* 初始化顺序表 */
table initTable()
{
    table t;
    t.head = (int *)malloc(sizeof(int)*TABLE_SIZE);
    if(t.head == NULL)
    {
        printf("Error: memory allocation failed\n");
        exit(1);
    }
    t.length = 0;
    t.size = TABLE_SIZE;
    return t;
}

/* 输出顺序表中的元素 */
void displayTable(table t){
    for(int i=0; i<t.length; i++)
        printf("%d ", t.head[i]);
    printf("\n");
}

/* 根据位置插入元素 */
void insertTable(table *t, int value, int index)
{
    // 边界判断
    if(index<1){
        index = 1;
    }
    if(index>t->length+1){
        index = t->length+1;
    }

    // 存满时，分配新的空间
    if(t->length == t->size)
    {
        t->head = (int *)realloc(t->head, sizeof(int)*(t->size+1));
        if(t->head == NULL){
            printf("Error: memory allocation failed\n");
            exit(1);
        }
        t->size++;
    }

    // 插入元素
    for(int i=t->length; i>index-1; i--){
        t->head[i] = t->head[i-1];
    }
    t->head[index-1] = value;
    t->length++;

    return;
}

/* 删除元素 */
void deleteTable(table* t, int index)
{
    //TODO:
    if(index<1 || index>t->length){
        printf("Error: index out of range\n");
        return;
    }
    t->length--;
    for(int i=index-1; i<t->length; i++){
        t->head[i] = t->head[i+1];
    }
    return;
}

/* 查找元素 */
int searchTable(table t, int value)
{
    //TODO:
    for(int i=0; i<t.length; i++){
        if(t.head[i] == value){
            return i+1;
        }
    }
    return -1;  // 不存在返回-1
}

/* 更改元素 */
void amendTable(table* t, int value, int newValue)
{
    //TODO:
    int index = searchTable(*t, value);
    if(index == -1){
        printf("Error: value not found\n");
        return;
    }
    t->head[index-1] = newValue;
    return;
}



int main(){
    table t=initTable();
    //向顺序表中添加元素
    for(int i=0; i<TABLE_SIZE-2; i++)
    {
        t.head[i] = i;
        t.length++;
    }
    insertTable(&t, 100, 3);
    insertTable(&t, 200, 5);
    insertTable(&t, 500, 5);
    printf("顺序表中的元素分别是：\n");
    displayTable(t);

    deleteTable(&t, 3);
    printf("删除元素后顺序表中的元素分别是：\n");
    displayTable(t);

    int index = searchTable(t, 500);
    printf("元素500在顺序表中的位置是：%d\n", index);
    amendTable(&t, 500, 5000);
    printf("更改元素500后顺序表中的元素分别是：\n");
    displayTable(t);
    return 0;

    
}