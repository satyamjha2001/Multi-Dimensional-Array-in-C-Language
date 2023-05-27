#include <stdio.h>
int main()
{
    int i, j, s, sum;
    printf("Enter order of  matrix: ");
    scanf("%d", &s);
    int a[s][s];
    printf("Enter the values for matrix:");
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Your matrix is\n");
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Your matrix upper triangle is\n");
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)
        {
            if (j < i)
            {
                printf("   ");
            }
            else
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}