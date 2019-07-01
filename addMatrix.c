#include<stdio.h>
void main()
{
    int m1[2][3],m2[2][3],sum[2][3],i,j;
    printf("Fill 2 x 3 first Matrix:\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("m1[%d][%d] = ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\nFill 2 x 3 Second Matrix:\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("m2[%d][%d] = ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
    printf("The Sum of the Matrices are :\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum[i][j] = m1[i][j]+m2[i][j];
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
}
