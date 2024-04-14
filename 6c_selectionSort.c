// selection sort is not stable.

#include <stdio.h>

void selectionSort(int *arr, int size)
{
    int top;

    for (int i = 0; i < size - 1; i++)
    {
        top = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[top])
            {
                int temp;
                temp = arr[top];
                arr[top] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int *arr, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
// 0, 1, 2, 3, 4
// 8, 0, 7, 1, 3, top = 8;

// pass - 0
// j = 1+1;
// A[j] < A[top]{
// swap()
// }
// 0 |, 1, 7, 8, 3, top = 0;

// pass - 1
// j = 1 + 1
// A[j] < A[top]{
// swap()
// }
// 0, 1 |, 3, 8, 7, top = 1;

// pass - 2
// j = 2 + 1
// A[j] < A[top]{
// swap()
// }
// 0, 1, 3 |, 7, 8, top = 2;

// pass - 3
// j = 3 + 1
// A[j] < A[top]{
// swap()
// }
// 0, 1, 3, 7 |, 8, top = 3;
{
    int A[] = {8, 0, 7, 1, 3, 11, 4, 222};
    int size = 8;

    printArray(A, size);
    selectionSort(A, size);
    printArray(A, size);

    return 0;
}