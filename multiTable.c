#include<stdio.h>

void main()
{
    int i,n,m;
    //n=2;
    printf("Kun wanza garnu xa?");
    scanf("%d",&n);
    printf("kati samma garne ta?");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("%d X %d = %d\n",n,i,(n*i));
    }
}
