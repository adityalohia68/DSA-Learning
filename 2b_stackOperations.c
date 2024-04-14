#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int full(struct stack *ptr)
{
    if (ptr->top == ptr->size)
        return 1;
    return 0;
}

int push(struct stack *ptr, int element)
{
    if (full(ptr))
        printf("Stack Overflow.");
    else
    {
        ptr->top += 1;
        ptr->arr[ptr->top] = element;
    }
}

int empty(struct stack *ptr)
{
    if (ptr->top <= -1)
        return 1;
    return 0;
}

int pop(struct stack *ptr)
{
    if (empty(ptr))
        return printf("Stack Underflow.");
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top -= 1;
        return value;
    }
}

void show(struct stack *ptr)
{
    for (int i = 0; i < ptr->size; i++)
    {
        printf("%d ", ptr->arr[i]);
    }
}

int main()
{
    struct stack *sb = (struct stack *) malloc(sb->size * sizeof(struct stack));
    sb->size = 8;
    sb->top = -1;

    push(sb, 999);
    // pop(sb, 999);
    printf("\n");
    show(sb);

    return 0;
}