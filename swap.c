#include<stdio.h>

void main()
{
    int a,b,temp;
    a = 2;
    b = 3;
    printf("Before Swapping a = %d and b = %d",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swapping a = %d and b = %d",a,b);

}
