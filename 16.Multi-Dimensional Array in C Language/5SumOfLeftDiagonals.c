#include <stdio.h>
int main()
{
    int i, j,size,sum=0;
    printf("Enter size of  matrix: ");
    scanf("%d", &size);
    int a[size][size];
    printf("Enter the values for matrix:");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Your matrix is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("Sum of left diagonal is %d",sum);
    return 0;
}