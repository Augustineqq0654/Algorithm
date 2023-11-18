#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
} node_t;

int main() {
    node_t nodes[] = {{1, NULL}, {2, NULL}, {3, NULL}};
    int len = sizeof(nodes) / sizeof(node_t);

    for (int i = 0; i < len-1; i++) {
        nodes[i].next = &(nodes[i + 1]);
    }

    node_t *head = &(nodes[0]);
    node_t *p = head;

    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }

    return 0;
}