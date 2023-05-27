#include <stdio.h>
int main()
{
    int i, j,r,c,sum;
    printf("Enter order of  matrix: ");
    scanf("%d%d", &r,&c);
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
    {   sum=0;
        for (j = 0; j < c; j++)
        {
                sum+=a[i][j];
        }
        printf("Sum of row %d: %d\n",i+1,sum);
    }
    for (j = 0; j < c; j++)
    {   sum=0;
        for (i = 0; i < r; i++)
        {
                sum+=a[i][j];
        }
        printf("Sum of column %d: %d\n",j+1,sum);
    }
    return 0;
}