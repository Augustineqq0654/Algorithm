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

//交换相邻链表节点
t_list* swap_pairs(t_list* head)
{
    // 使用双指针避免中间变量
    t_list* fakehead = malloc(sizeof(t_list));
    fakehead->next = head;
    t_list* right = fakehead->next;
    t_list* left = fakehead;
    while(left&&right&&right->next)
    {
        left->next = right->next;
        right->next = left->next->next;
        left->next->next = right;
        left = right;
        right = left->next;
    }
    return fakehead->next;
}

//删除链表的倒数第N个节点
t_list* remove_nth_from_end(t_list* head, int n)
{
    //定义虚拟头结点
    t_list* dummy = malloc(sizeof(t_list));
    dummy->val = 0;
    dummy->next = head;
    //定义双指针
    t_list* slow = dummy;
    t_list* fast = head;
    for(int i=0; i<n; i++)
        fast = fast->next;
    while(fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;  //删除倒数第 N 个节点
    head = dummy->next;
    free(dummy);
    return head;
}

//链表相交
t_list* get_intersection_node(t_list* headA, t_list* headB)
{
    t_list* l = NULL, *s = NULL;
    int lenA = 0, lenB = 0, gap = 0;
    //求两个链表的长度
    s = headA;
    while(s)
    {
        lenA++;
        s = s->next;
    }
    s = headB;
    while(s)
    {
        lenB++;
        s = s->next;
    }

    //求两个链表的长度差
    if(lenA>lenB)
    {
        l = headA, s = headB;
        gap = lenA - lenB;
    }
    else
    {
        l = headB, s = headA;
        gap = lenB - lenA;
    }

    //尾部对齐
    while(gap--)
        l = l->next;
    //移动，检查是否有相同元素
    while(l)
    {
        if(l==s) 
            return l;
        l = l->next, s = s->next;
    }
    return NULL;
}

//检测是否是环形链表
t_list* detect_cycle(t_list* head)
{
    t_list *fast = head, *slow = head;
    while(fast && fast->next)
    {
        //判断两个指针是否相等
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            t_list *f = fast, *h = head;
            while(f!=h)
            {
                f = f->next;
                h = h->next;
            }
            return h;
        }
    }
    return NULL;
}