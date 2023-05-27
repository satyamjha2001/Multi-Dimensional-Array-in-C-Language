#include<stdio.h>
int main() {
int i,j;    
int a[3][3],b[3][3];
printf("Enter the 9 values for first matrix:");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
     scanf("%d",&a[i][j]);
}
printf("Enter the 9 values for second matrix:");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
     scanf("%d",&b[i][j]);
}
int c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%2d ",c[i][j]);
        }
        printf("\n");
    }
return 0;
}