#include <stdio.h>
#include <stdlib.h>

struct myList
{
    int total_size;
    int used_size;
    int *pointer;
};

void createArray(struct myList *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->pointer = (int *)malloc(tSize * sizeof(int));
}

void setValue(struct myList *b)
{
    int n;

    for (int j = 0; j < b->used_size; j++)
    {
        printf("Enter element of array[%d]: \n->", j);
        scanf("%d", &n);
        b->pointer[j] = n;
    }
}

void show(struct myList *c)
{
    for (int i = 0; i < c->used_size; i++)
    {
        printf("%d ", c->pointer[i]);
    }
}

int main()
{
    struct myList marks;

    createArray(&marks, 10, 2);
    setValue(&marks);
    show(&marks);

    return 0;
}