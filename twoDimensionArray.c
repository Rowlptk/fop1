#include<stdio.h>

void main()
{
    int m1[2][2],i,j;
    printf("Fill 2 x 2 matrix: \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("The Values of 2 x 2 Matrix is :\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d  ",m1[i][j]);
        }
        printf("\n");
    }
}
