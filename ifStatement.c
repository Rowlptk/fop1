#include<stdio.h>

void main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num > 1)
    {
        printf("Positive");
    }
    else if(num == 0)
    {
        printf("Number is Zero")
    }
    else if(num == 1)
    {
        printf("Number is One")
    }
    else{
        printf("Negative");
    }


}
