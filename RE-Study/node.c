#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *pointer2nextNode;
};

void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d - ", head->data);
        head = head->pointer2nextNode;
    }
    printf("\n");
}

struct node *insertAtbeg(struct node *root, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->pointer2nextNode = root;

    return newNode;
}

struct node *insertAtEnd(struct node *root, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    struct node *p = root;

    while (p != NULL)
    {
        p = p->pointer2nextNode;
    }
    p->pointer2nextNode = newNode;
    newNode->pointer2nextNode = NULL;

    return root;
}

struct node *insertAtIndex(struct node *root, int data, int index)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *previousNode = root;
    int i = 0;
    while (i != index - 1)
    {
        previousNode = previousNode->pointer2nextNode;
        i++;
    }
    newNode->pointer2nextNode = previousNode->pointer2nextNode;
    newNode->data = data;
    previousNode->pointer2nextNode = newNode;

    return root;
}

struct node *deleteHead(struct node *head)
{
    struct node *p = head;
    p = p->pointer2nextNode;
    free(head);

    return p;
}

struct node *deleteEnd(struct node *head)
{
    struct node *p = head;
    struct node *q = p->pointer2nextNode;

    while (q->pointer2nextNode != NULL)
    {
        p = p->pointer2nextNode;
        q = q->pointer2nextNode;
    }
    p->pointer2nextNode = NULL;
    free(q);

    return head;
}

struct node *deleteIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = p->pointer2nextNode;

    int i = 0;
    while (i != index - 1)
    {
        p = p->pointer2nextNode;
        q = q->pointer2nextNode;
        i++;
    }
    p->pointer2nextNode = q->pointer2nextNode;
    free(q);

    return head;
}

int main()
{
    struct node *head;
    struct node *two;
    struct node *three;
    struct node *four;
    struct node *five;

    head = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->pointer2nextNode = two;
    two->data = 2;
    two->pointer2nextNode = three;
    three->data = 3;
    three->pointer2nextNode = four;
    four->data = 4;
    four->pointer2nextNode = NULL;

    display(head);

    // Insert
    // head = insertAtbeg(head, 23);
    // head = insertAtEnd(head, 65);
    // head = insertAtIndex(head, 65, 2);

    // Delete
    // head = deleteHead(head);
    // head = deleteEnd(head);
    head = deleteIndex(head, 0);
    display(head);

    return 0;
}