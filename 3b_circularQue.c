// circular increment: 0-1-2-3-4-5-0, i = (i+1)%size.

#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int front, rear, size;
    int *pointer;
};

void enqueue(struct Queue *q, int value)
{
    if (((q->rear + 1) % q->size) == q->front)
        printf("Queue overflow.\n");
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->pointer[q->rear] = value;
    }
}

int isEmpty(struct Queue *q)
{
    if (q->rear == q->front)
        return 1;
    return 0;
}

int isFull(struct Queue *q)
{
    if (((q->rear + 1) % q->size) == q->front)
        return 1;
    return 0;
}

void dequeue(struct Queue *q)
{
    int value = -1;
    if (q->rear == q->front)
    {
        printf("Queue underflow.\n");
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        value = q->pointer[q->front];
        printf("Value popped: %d\n", value);
    }
}

int main(char agrs[])
{
    struct Queue q;
    q.size = 5;
    q.front = q.rear = 0;
    q.pointer = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 5);
    enqueue(&q, 34);
    enqueue(&q, 3);
    
    dequeue(&q);

    return 0;
}