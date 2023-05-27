#include <stdio.h>
int main()
{
    int i, j, r, c;
    printf("Enter number of rows of matrix: ");
    scanf("%d", &r);
    printf("Enter number of columns of matrix: ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter the values for matrix:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Your matrix is\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    int b[c][r];
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("Transpose of matrix is\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%2d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}