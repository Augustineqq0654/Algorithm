
#pragma once

struct list_node{
    int val;
    struct list_node* next;
};
typedef struct list_node t_list;

//函数声明
t_list *create_list_node(int val);
void tail_insert(t_list* phead, t_list* new_node);
void print_node(t_list* phead);