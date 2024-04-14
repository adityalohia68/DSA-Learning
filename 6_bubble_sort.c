#include <stdio.h>

void bubbleSort(int *arr, int lenght)
{
    for (int i = 0; i < lenght - 1; i++) // for number of passes(n-1) done in sorting
    {
        for (int j = 0; j < lenght - i - 1; j++) // for number of comparision(n-i-1) in the 1 pass.
        {
            if (arr[j] > arr[j + 1]) // camparision
            {
                arr[j + 1] = arr[j] + arr[j + 1];
                arr[j] = arr[j + 1] - arr[j];
                arr[j + 1] = arr[j + 1] - arr[j];
            }
        }
    }
}

void bubbleSortAdaptive(int *arr, int lenght)
{
    for (int i = 0; i < lenght - 1; i++)
    {
        printf("Checking for pass no. %d\n", i + 1);
        int isSorted = 0;

        for (int j = 0; j < lenght - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j + 1] = arr[j] + arr[j + 1];
                arr[j] = arr[j + 1] - arr[j];
                arr[j + 1] = arr[j + 1] - arr[j];
                isSorted = 1;
            }
            else if (isSorted)
            {
                return;
            }
        }
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
    int A[] = {6, 12, 3, 8, 2};
    int size = 5;

    printArray(A, size);
    bubbleSort(A, size);
    printArray(A, size);

    return 0;
}