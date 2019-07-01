#include<stdio.h>

void main()
{
    int x,y,z;
    printf("Enter three numbers");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z)
    {
        printf("x is greater");
    }
    else if(y>z)
    {
        printf("Y is greater");
    }
    else
    {
        printf("Z is greater");
    }
}
