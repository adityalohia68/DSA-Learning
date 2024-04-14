#include <stdio.h>

int maxDepth(int *arr)
{
    if (top == 0)
        return 0;
    else if (top < 0)
        return 1;
    else if (top > 0)
    {
        for (int i = 0; i <= top; i++)
        {
            maxDepth(i) = max(maxDepth(2 * i), maxDepth(2 * i + 1))
        }
    }
}

int main()
{
    int A[] = {7, 11, 2, 7, 1, 11, 9, 2, NULL, NULL, 11};

    printf(max(1, 2));

    return 0;
}