//P5727
#include <stdio.h>
#include <stdlib.h>

struct node;

struct node {
    int val;
    struct node *prev;
};

struct node* makeNode(int val, struct node *prev) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->prev = prev;
    new_node->val = val;
    return new_node;
}

int main() {
    int n;
    scanf("%d", &n);

    struct node *head = makeNode(n, NULL);
    struct node *curr_node, *prev_node;
    curr_node = head;
    
    while (n != 1) {
        if (n % 2) n = 3 * n + 1;
        else n /= 2;
        struct node *new_node = makeNode(n, curr_node);
        curr_node = new_node;
    }

    while (curr_node) {
        printf("%d ", curr_node->val);
        curr_node = curr_node->prev;
    }

    return 0;
}