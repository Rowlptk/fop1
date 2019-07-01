#include<stdio.h>

int myfunction(int a, int b);

void main()
{
    int x;
    x = myfunction(3,6);
    printf("\n%d",x);
}

int myfunction(int a, int b)
{
    printf("I am a function");
    return 1;
}
