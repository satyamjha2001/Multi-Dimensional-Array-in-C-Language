#include <stdio.h>
int main()
{
    int i, j,r,c,max=0,sum,b;
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
                if(a[i][j]==1)
                {
                    sum++;
                }
        }
        if(max<sum)
        {max=sum;
          b=i;
        }
    }
    printf("Row %d have maximum number of 1's",b+1);
    return 0;
}