#include<stdio.h>
                                    n1=5
                                    n2=4
                                    n3=3
void main()
{
    int n1,n2,n3;
    printf("Enter three number");
    scanf("%d%d%d",&n1,&n2,&n3);
    ((n1>n2)&&(n1>n3))?printf("n1 is greater"):
        ((n2>n3)?printf("n2 is greater"):printf("n3 is greater"));
}
