#include "list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//创建链表节点
t_list *create_list_node(int val)
{
    t_list *p = malloc(sizeof(t_list));
    if(p==NULL)
    {
        printf("malloc error!\n");
        return NULL;
    }
    //清零
    memset(p, 0, sizeof(t_list));
    p->val = val;
    p->next = NULL;
    return p;
}

//链表节点尾插
void tail_insert(t_list* phead, t_list* new_node)
{
    t_list *p = phead;
    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = new_node;
}

//打印链表节点数据
void print_node(t_list* phead)
{
    t_list *p = phead;
    //p = phead->next;
    while(p->next!=NULL)
    {
        printf("%d\t",p->val);
        p = p->next;
    }
    printf("%d\n", p->val);
}