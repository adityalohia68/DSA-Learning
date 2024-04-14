#include <stdio.h>

#define N 10
int Stack[N];
int top = -1;

void pop()
{
    if (top == -1)
        printf("Stack underflow.\n");
    else
    {
        printf("Popped element: %d\n", Stack[top]);
        top -= 1;
    }
}

void push(int value)
{
    if (top == N - 1)
        printf("Stack overflow.\n");
    else
    {
        top += 1;
        Stack[top] = value;
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int peek(){
    return Stack[top];
}

int main()
{
    // display(Stack, N);
    push(69);
    push(9);
    push(6);
    pop();
    // display(Stack, N);
    int result = peek();
    printf("%d", result);


    return 0;
}