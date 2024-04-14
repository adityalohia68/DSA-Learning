#include <stdio.h>

// total comparisions done in the worst case of insertion sorting =  n(n-1)/2 - O(n'2), and best case = n - O(n.)
void insertionSort(int *arr, int lenght)
{
    int key, j;

    for (int i = 1; i < lenght-1; i++) // loop for each pass
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int *arr, int lenght)
{
    for (int i = 0; i < lenght; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int A[] = {3, 2, 1, 4, 5};
    int len = 5;

    printArray(A, len);
    insertionSort(A, len);
    printArray(A, len);

    return 0;
}