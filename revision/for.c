#include<stdio.h>

void main()
{
    int i,n,m,s;
    printf("Kun wanza? ");
    scanf("%d",&n);
    printf("Start point? ");
    scanf("%d",&s);
    printf("End point? ");
    scanf("%d",&m);
    for(i=s;i<=m;i++)
    {
        printf("%d x %d = %d\n",n,i,(n*i));
    }
}
