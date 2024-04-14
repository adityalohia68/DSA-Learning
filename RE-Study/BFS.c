#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int f, r, size;
    int *ptr;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
        return 1;
    return 0;
}

int isEmpty(struct queue *q)
{
    if (q->f == q->r)
        return 1;
    return 0;
}

void enqueue(struct queue *q, int value)
{
    if (isFull(q))
        printf("Overflow...\n");
    else
    {
        q->r += 1;
        q->ptr[q->r] = value;
    }
}

int dequeue(struct queue *q)
{
    if (isEmpty(q))
        printf("underflow..\n");
    else
    {
        q->f += 1;
        return q->ptr[q->f];
    }
}

void display(struct queue *q)
{
    if (q->f == q->r)
        printf("underflow..\n");
    else
    {
        for (int i = q->f; i < q->r; i++)
        {
            printf("%d - ", q->ptr[i]);
        }
    }
}

int main()
{
    int source = 2;
    
    struct queue UV;
    UV.size = 10;
    UV.f = UV.r = -1;
    UV.ptr = (int *)malloc(UV.size * sizeof(int));
    
    // BFS implimentation: -
    int visited[7] = {0, 0, 0, 0};

    int adjacency[7][7] = {
        {0, 1, 1, 1},
        {1, 0, 0, 0},
        {1, 0, 0, 1},
        {1, 0, 1, 0},
    };

    enqueue(&UV, source);
    while (isEmpty(&UV))
    {
        int value4Check = dequeue(&UV);
        for (int UV.)
    }
    

    return 0;
}