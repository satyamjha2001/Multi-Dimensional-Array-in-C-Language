#include <stdio.h>
int main()
{
    int i, j, r, c, sum = 0;
    float p;
    printf("Enter order of  matrix: ");
    scanf("%d%d", &r, &c);
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
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
               { sum++;}
            // else
            // continue;   
        }
    }
    p=(2*r*c)/3.0;
    if(p<=sum)
    printf("Given matrix is sparse matrix");
    else
    printf("Given matrix is not sparse matrix");
    return 0;
}