/*
删除链表中等于给定值 val 的所有节点。

示例 1：
输入：head = [1,2,6,3,4,5,6], val = 6
输出：[1,2,3,4,5]

示例 2：
输入：head = [], val = 1
输出：[]

示例 3：
输入：head = [7,7,7,7], val = 7
输出：[]
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//定义结点结构体
struct ListNode{
    int val;
    struct ListNode *next;
};
typedef struct ListNode t_list;

t_list* remove_elements(t_list* head, int val)
{
    //typedef struct ListNode ListNode;
    t_list *shead;
    shead = malloc(sizeof(t_list));
    shead->next = head;
    t_list *cur = shead;
    while(cur->next != NULL)
    {
        if(cur->next->val == val)
        {
            t_list *tmp = cur->next;
            cur->next = cur->next->next;
            free(tmp);
        }
        else
        {
            cur = cur->next;
        }
    }
    head = shead->next;
    free(shead);
    return head;
}

t_list *create_list_node(int data)
{
    t_list *node = NULL;
    node = (t_list *)malloc(sizeof(t_list));
    if(node == NULL)
        printf("malloc fail!\n");
    memset(node, 0, sizeof(t_list));
    node->val = data;
    node->next = NULL;
    return node;
}

int main()
{
    int nums[] = {1,2,6,3,4,5,6};
    int delete_val = 6;
    int length = sizeof(nums)/sizeof(int);
    //创建链表
    t_list *head = create_list_node(0);
    t_list *p = head;
    printf("原始链表：\n");
    for(int i=0; i<length; i++)
    {
        //t_list *p = head;
        p->next = create_list_node(nums[i]);
        p = p->next;
        printf("%d\t", p->val);
    }
    printf("\n");
    
    //打印输出
    t_list *p2 = head->next;
    remove_elements(p2, delete_val);
    printf("删除元素后链表：\n");
    while(p2->next != NULL)
    {
        printf("%d\t", p2->val);
        p2 = p2->next;
    }
    printf("%d\n",p2->val);

    return 0;
}