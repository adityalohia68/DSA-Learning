#include <stdio.h>

#define N 2

void mulMatrix(int A[][N], int B[][N])
{
    int C[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                C[i][j] = A[i][k] + B[k][j];
            }
        }
    }
    return *C;
}

void printmatrix(int D[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", D[i][j]);
        printf("\n");
    }
}

int main()
{
    int A[][N] = {
        {1, 2},
        {3, 4},
    };
    int B[][N] = {
        {2, 2},
        {2, 2},
    };

    int C[][N] = mulMatrix(A, B);
    printmatrix(C);

    return 0;
}