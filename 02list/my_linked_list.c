/*
get(index)：获取链表中第 index 个节点的值。如果索引无效，则返回-1。
addAtHead(val)：在链表的第一个元素之前添加一个值为 val 的节点。插入后，新节点将成为链表的第一个节点。
addAtTail(val)：将值为 val 的节点追加到链表的最后一个元素。
addAtIndex(index,val)：在链表中的第 index 个节点之前添加值为 val  的节点。如果 index 等于链表的长度，则该节点将附加到链表的末尾。如果 index 大于链表长度，则不会插入节点。如果index小于0，则在头部插入节点。
deleteAtIndex(index)：如果索引 index 有效，则删除链表中的第 index 个节点。
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include "list.h"
// #include "list.c"

typedef struct my_linked_list
{
    int val;
    struct my_linked_list* next;
}my_linked_list;

/*Initialize your data structure here*/
my_linked_list* my_linked_list_create()
{
    my_linked_list* head = (my_linked_list*)malloc(sizeof(my_linked_list));
    head->next = NULL;
    return head;
}

/*Get the value of the index node in the list*/
int my_linked_list_get(my_linked_list* obj, int index)
{
    my_linked_list *cur = obj->next;
    for(int i=0; cur!=NULL; i++)
    {
        if(i==index)
            return cur->val;
        else
            cur = cur->next;
    }
    return -1;
}

/* Add a node of value val before the first element of the linked list */
void my_linked_list_add_at_head(my_linked_list* obj, int val)
{
    my_linked_list *nhead = (my_linked_list*)malloc(sizeof(my_linked_list));
    nhead->val = val;
    nhead->next = obj->next;
    obj->next = nhead;
}

/* Append a node of value val to the last element of the linked list */
void my_linked_list_add_at_tail(my_linked_list* obj, int val)
{
    my_linked_list* cur = obj;
    while(cur->next != NULL)
        cur = cur->next;
    my_linked_list *ntail = (my_linked_list*)malloc(sizeof(my_linked_list));
    ntail->val = val;
    ntail->next = NULL;
    cur->next = ntail;
}

/* Add a node of value val before the index node in the list */
void my_linked_list_add_at_index(my_linked_list* obj, int index, int val)
{
    if(index == 0)
    {
        my_linked_list_add_at_head(obj, val);
        return;
    }
    my_linked_list *cur = obj->next;
    for(int i=1; cur!=NULL; i++)
    {
        if(i==index)
        {
            my_linked_list* newnode = (my_linked_list*)malloc(sizeof(my_linked_list));
            newnode->val = val;
            newnode->next = cur->next;
            cur->next = newnode;
            return;
        }
        else
            cur = cur->next;
    }
}

/* Delete the index node in the list */
void my_linked_list_delete_at_index(my_linked_list* obj, int index)
{
    if(index==0)
    {
        my_linked_list *tmp = obj->next;
        if(tmp!=NULL)
        {
            obj->next = tmp->next;
            free(tmp);
        }
        return;
    }
    my_linked_list *cur = obj->next;
    for(int i=1; cur!=NULL&&cur->next!=NULL; i++)
    {
        if(i==index)
        {
            my_linked_list *tmp = cur->next;
            if(tmp!=NULL)
            {
                cur->next = tmp->next;
                free(tmp);
            }
            return;
        }
        else
            cur = cur->next;
    }
}

void my_linked_list_free(my_linked_list *obj)
{
    while(obj!=NULL)
    {
        my_linked_list * tmp = obj;
        obj = obj->next;
        free(tmp);
    }
}

//打印链表节点数据
void print_node(my_linked_list* phead)
{
    my_linked_list *p = phead;
    p = phead->next;
    while(p->next!=NULL)
    {
        printf("%d\t",p->val);
        p = p->next;
    }
    printf("%d\n", p->val);
}

int main()
{
    my_linked_list* obj = my_linked_list_create();
    int param_1 = my_linked_list_get(obj, 2);
    printf("%d\n", param_1);
    my_linked_list_add_at_head(obj, 4);
    my_linked_list_add_at_tail(obj, 3);
    print_node(obj);
    my_linked_list_add_at_index(obj, 1, 100);
    print_node(obj);
    my_linked_list_delete_at_index(obj, 2);
    print_node(obj);
    my_linked_list_free(obj);
    return 0;
}
