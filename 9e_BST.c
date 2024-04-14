#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *create(int value)
{
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    root->data = value;
    root->left = NULL;
    root->right = NULL;

    return root;
}

struct Node *createLeft(struct Node *root, int value)
{
    root->left = create(value);
    return root->left;
}

struct Node *createRight(struct Node *root, int value)
{
    root->right = create(value);
    return root->right;
}

void traversalInorder(struct Node *root)
{
    if (root == NULL)
        return;
    traversalInorder(root->left);
    printf("%d ->", root->data);
    traversalInorder(root->right);
}

struct Node *search(struct Node *root, int key)
{
    if (root == NULL)
        return NULL;
    if (root->data == key)
        return root;
    else if (root->data > key)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main()
{
    struct Node *root = create(4);
    createLeft(root, 2);
    createLeft(root->left, 1);
    createRight(root->left, 3);

    createRight(root, 7);
    createLeft(root->right, 5);
    createRight(root->right, 10);

    struct Node *searchOutput = search(root, 10);
    if (searchOutput != NULL)
    {
        printf("ans: %d\n", searchOutput->data);
    }
    else
    {
        printf("Element Not Found.\n");
    }

    return 0;
}