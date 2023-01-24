/*
题意：反转一个单链表。
示例: 输入: 1->2->3->4->5->NULL 输出: 5->4->3->2->1->NUL
*/

#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.c"

t_list* reverse_list(t_list* head)
{
    //保存下一个节点
    t_list* temp;
    //pre指针指向前一个当前节点的前一个节点
    t_list* pre = NULL;
    //用head代替cur
    while(head)
    {
        //保存下一个节点的位置
        temp = head->next;
        //反转操作
        head->next = pre;
        //更新节点
        pre = head;
        head = temp;
    }
    return pre;
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int length = sizeof(nums)/sizeof(int);
    t_list* head = create_list_node(0);
    for(int i=0; i<length; i++)
    {
        tail_insert(head, create_list_node(nums[i]));
    }
    print_node(head->next);
    t_list* tail_to_head = reverse_list(head->next);
    print_node(tail_to_head);
    return 0;
}