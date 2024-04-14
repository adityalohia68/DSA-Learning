#include <stdio.h>
#include <stdlib.h>

struct list
{
    int front, back, size;
    int *pointer;
};

int isEmpty(struct list *q)
{
    if (q->front == q->back)
        return 1;
    return 0;
}

int isFull(struct list *q)
{
    if (q->back == q->size - 1)
        return 1;
    return 0;
}

void enqueue(struct list *q, int element)
{
    if (isFull(q))
        printf("Queue Overflow");
    else if ((q->front == -1) && (q->back == -1))
    {
        q->front = q->back = 0;
        q->pointer[q->back] = element;
    }
    else
    {
        q->back = q->back + 1;
        q->pointer[q->back] = element;
    }
}

void dequeue(struct list *q)
{
    if (isEmpty(q))
        printf("Queue underflow");
    else
    {
        q->front = q->front + 1;
        printf("value popped: %d\n", q->pointer[q->front]);
    }
}

void PrintArray(struct list *q)
{
    printf("Displaying the Queue - \n");
    for (int i = q->front; i <= q->back; i++)
    {
        printf("%d ", q->pointer[i]);
    }
}

int main()
{
    struct list queue;
    queue.size = 20;
    queue.front = queue.back = -1;
    queue.pointer = (int *)malloc(queue.size * sizeof(int));

    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 5);
    enqueue(&queue, 8);
    dequeue(&queue);

    PrintArray(&queue);

    return 0;
}
