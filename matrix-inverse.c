#include <stdio.h>

int main()
{
    int A[2][2], adjA[2][2];
    int i, j;
    float invA[2][2], det;
    printf("Enter elements for 2 * 2 matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // printing the matrix
    printf("Matrix A is\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    /* Calculate determinant of matrix A */
    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
    if (det == 0)
    {
        printf("Inverse of this Matrix cannot be found");
        return 0;
    }

    /* Find adjoint of matrix A */
    adjA[0][0] = A[1][1];
    adjA[1][1] = A[0][0];
    adjA[0][1] = -A[0][1];
    adjA[1][0] = -A[1][0];

    /* Find Inverse of A */
    printf("Inverse of Matrix A is\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            invA[i][j] = (adjA[i][j]) / det;
            printf("%.1f ", invA[i][j]);
        }
        printf("\n");
    }
    return 0;
}