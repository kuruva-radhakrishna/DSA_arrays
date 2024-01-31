// write a program to create a matrix of size 5x5. find whether it is orthogonal or not.
#include <stdio.h>
#include <time.h>
void orthogonal(int m, int a[m][m])
{
    int result[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result[i][j] = 0;
        }
    }
    int b[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < m; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("product of two matrices A and A' \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // declaring identity matrix
    int identity[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
                identity[i][j] = 1;
            else
                identity[i][j] = 0;
        }
    }

    // comoparing A*A' with identity
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (result[i][j] != identity[i][j])
            {
                printf("matrix is not orthogonal");
                return;
            }
        }
    }
    printf("matrix is orthogonal");
    return;
}

int main()
{
    clock_t start = clock();
    int m, n;
    printf("Enter no of rows and columns of the matrix : ");
    scanf("%d %d", &m, &n);
    int mat1[m][n];
    printf("Enter Matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    if (m != n)
    {
        printf("Matrix is not Orthogonal\n");
    }
    else
    {
        orthogonal(m, mat1);
    }

    printf("\n Execution timme for this code is : %f\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    return 0;
}
