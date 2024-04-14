#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int empty(struct stack *ptr)
{
    if (ptr->top <= -1)
        return 1;
    else
        return 0;
}

int full(struct stack *ptr)
{
    if (ptr->top == ptr->size)
        return 1;
    else
        return 0;
}

int main()
{
    struct stack *s;
    s->size = 6;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // push an element to the array
    
    for (int i = 0; i < s->size - 1; i++)
    {
        int n = s->arr[i];
        printf("Enter the element of array: ");
        scanf("%d", &n);
        s->top++;
    }
    

    // check if stack is empty or full
    // (empty(s))
    //     ? printf("Stack is empty.")
    //     : printf("Stack is not empty.");
    // (full(s))
    //     ? printf("Stack is full.")
    //     : printf("Stack is not full.");

    return 0;
}