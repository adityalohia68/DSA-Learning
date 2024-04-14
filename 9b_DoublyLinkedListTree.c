#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *create(int value)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = value;
    node->left = NULL;
    node->left = NULL;
}

int main()
{
    // creating struct node
    struct Node *root = create(2);
    struct Node *A = create(1);
    struct Node *A1 = create(11);
    struct Node *A2 = create(12);
    struct Node *B = create(4);
    struct Node *B2 = create(3);

    // linking struct nodes
    root->left = A;
    root->right = B;

    A->left = A1;
    A->right = A2;

    B->right = B2;

    return 0;
}