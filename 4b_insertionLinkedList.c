#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// case 4: insert after a node.
void insertAt_index(struct Node *head, int data, int index)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    new_node->data = data;
    new_node->next = p->next;
    p->next = new_node;
}

void traverse(struct Node *addressOf_1stNode)
{
    while (addressOf_1stNode != NULL)
    {
        printf("%d ", addressOf_1stNode->data);
        addressOf_1stNode = addressOf_1stNode->next;
    }
}

int main()
{
    struct Node *one = (struct Node *)malloc(sizeof(struct Node));
    struct Node *two = (struct Node *)malloc(sizeof(struct Node));
    struct Node *three = (struct Node *)malloc(sizeof(struct Node));

    one->data = 1;
    one->next = two;

    two->data = 2;
    two->next = three;

    three->data = 3;
    three->next = NULL;

    // case 1: insert at the beginninng.
    // struct Node *insertAt_beginning = (struct Node *)malloc(sizeof(struct Node));
    // insertAt_beginning->data = 9999;
    // insertAt_beginning->next = one;

    // case 2: insert at the between.
    // struct Node *insertA;t_between = (struct Node *)malloc(sizeof(struct Node));
    // one->next = insertAt_between;

    // insertAt_between->data = 999;
    // insertAt_between->next = two;

    // case 3: insert at the end.
    // struct Node *insertAt_end = (struct Node *)malloc(sizeof(struct Node));
    // three->next = insertAt_end;
    // insertAt_end->data = 99;
    // insertAt_end->next = NULL;

    // case 4: insert after a node.
    // insertAt_index(one, 69, 2);
    

    traverse(one);

    return 0;
}