#include<stdio.h>

void main()
{
    int n;
    do{
        printf("Enter 99 to exit loop");
        scanf("%d",&n);
    }while(!(n>90 && n<100));
}
