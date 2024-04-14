#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *pointerTo_nextNode; // self refrential structure.
};

void traverse(struct Node *addressOf_1stNode)
{
    while (addressOf_1stNode != NULL)
    {
        printf("%d ", addressOf_1stNode->data);
        addressOf_1stNode = addressOf_1stNode->pointerTo_nextNode;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    // Allocate memo for the NODES in the linked list dynamically.
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    // link nodes to the next node.
    head->data = 3434;
    head->pointerTo_nextNode = second;
    second->data = 34;
    second->pointerTo_nextNode = third;
    third->data = 343;
    third->pointerTo_nextNode = forth;
    forth->data = 343434;
    forth->pointerTo_nextNode = NULL; // list termination w/NULL keyword.

    traverse(head);

    return 0;
}