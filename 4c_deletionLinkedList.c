#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node *addressOf_1stNode)
{
    while (addressOf_1stNode != NULL)
    {
        printf("%d ", addressOf_1stNode->data);
        addressOf_1stNode = addressOf_1stNode->next;
    }
    printf("\n");
}

struct Node *delete_beg(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *delete_between(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = p->next;
    int i = 0;

    if (head == NULL)
    {
        printf("\nThe list is empty.");
    }
    else
    {
        while (i != index - 1)
        {
            p = p->next;
            q = q->next;
            i++;
        }
        p->next = q->next;
        free(q);
    }

    return head;
}

struct Node *delete_value(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;

    if (head == NULL)
    {
        printf("\nThe list is empty.");
    }
    else if (head->data == value) {
        head = head->next;
        free(head);
    }
    else
    {
        while (q->data != value && q->next != NULL)
        {
            p = p->next;
            q = q->next;
        }

        if (p->data == value)
        {
            p->next = q->next;
            free(q);
        }
    }

    return head;
}

struct Node *delete_last(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = p->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    return head;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *two = (struct Node *)malloc(sizeof(struct Node));
    struct Node *three = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = two;

    two->data = 2;
    two->next = three;

    three->data = 3;
    three->next = NULL;

    traverse(head);
    // head = delete_beg(head);
    // head = delete_between(head, 0);
    head = delete_value(head, 1);
    // head = delete_last(head);
    traverse(head);

    return 0;
}