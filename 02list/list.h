
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
t_list* swap_pairs(t_list* head);
t_list* remove_nth_from_end(t_list* head, int n);
t_list* get_intersection_node(t_list* headA, t_list* headB);
t_list* detect_cycle(t_list* head);