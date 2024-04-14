#include <stdio.h>

#define N 10
int stack[N];
int top = -1;

void push(int value)
{
    if (top == N)
        printf("Stack overflow..");
    else
    {
        top++;
        stack[top] = value;
    }
}

int pop()
{
    if (top == -1)
        printf("Stack underflow..");
    else
    {
        printf("value popped: %d\n", stack[top]);
        top--;
    }
}

int peek()
{
    printf("TOP: %d\n", stack[top]);
}

void display()
{
    for (int i = 0; i <= top; i++)
        printf("%d - ", stack[i]);
}

int main()
{
    push(23);
    push(3);
    pop();
    peek();

    display();

    return 0;
}