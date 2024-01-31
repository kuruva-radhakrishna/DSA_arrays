// write a program to create two matrices of size 4x4, calculate and print the product matrix
#include <stdio.h>
#include <time.h>

void multiplication(int m, int n, int a[m][n], int b[m][n])
{
    int result[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("product of two matrices A and B\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    clock_t start=clock();
    int m,n;
    printf("Enter no of rows and columns of two matrices : ");
    scanf("%d %d",&m,&n);
    int mat1[m][n],mat2[m][n];
    printf("Enter Matrix 1: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter Matrix 2: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    multiplication(m,n,mat1,mat2);

    printf("\n Execution timme for this code is : %f\n",(double)(clock()-start)/CLOCKS_PER_SEC);
    return 0;
}
