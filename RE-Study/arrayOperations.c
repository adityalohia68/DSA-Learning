#include <stdio.h>

void display(int *a, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void insertionAtEnd

int main(int argc, char const *argv[])
{
    int MAX = 10;
    int a[10] = {1, 2, 6, 7, 7, 3};
    int size = 9;

    display(a, size);

    // insertion at the end in array
    size += 1;
    int number = 99;
    if (size > MAX)
        printf("Not possible..");
    else
    {
        a[size-1] = number;
    }

    display(a, size);
    
    
    // insertion at given index in array



    return 0;
}
