#include <stdio.h>
#include <stdlib.h>

void traverse(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

int unsorted_insert(int *arr, int capacity, int len, int element)
{
    len += 1;
    if (len > capacity)
        return -1;
    else
        arr[len - 1] = element;
}

int sorted_insert(int arr[], int capacity, int len, int element)
{
    int i;
    len += 1;
    if (len > capacity)
        return -1;
    else
    {
        for (i = len - 1; (i >= 0 && arr[i] > element); i--)
            arr[i + 1] = arr[i];
        arr[i + 1] = element;
    }
}

void delete(int *arr, int len, int index)
{
    int data = arr[index];

    for (int i = index; i < len - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int linear_search(int *arr, int len, int element)
{
    // searching done by array traversal.
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == element)
        {
            return i;
            break;
        }
    }
    return -1;
}

int binary_search(int *arr, int len, int element)
{
    int mid, low = 0;
    int high = arr[len - 1];

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (mid == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low == mid + 1;
        }
        else if (arr[mid] > element)
        {
            high == mid - 1;
        }
    }
    return -1;
}

int main()
{
    int l1[100] = {1, 2, 3, 4, 5, 6, 7};
    int aquired_size = 7;
    int result = 0;

    result = sorted_insert(l1, 100, aquired_size, 999);
    aquired_size += 1;
    (result == -1)
        ? printf("Stack Overflow.")
        : traverse(l1, aquired_size);

    // result = unsorted_insert(l1, 100, aquired_size, 444);
    // aquired_size += 1;
    // (result == -1)
    //     ? printf("Stack Overflow.")
    //     : traverse(l1, aquired_size);

    // delete (l1, aquired_size, 6);
    // aquired_size-=1;
    // traverse(l1, aquired_size);

    // result = linear_search(l1, aquired_size, 6);
    // (result == -1)
    //     ? printf("Element not Found.")
    //     : printf("Element Found at index: %d", result);

    // result = binary_search(l1, aquired_size, 5);
    // (result == -1)
    //     ? printf("Element not Found.")
    //     : printf("Element Found at index: %d", result);

    return 0;
}