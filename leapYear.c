#include<stdio.h>

void main()
{
    int Year;
    printf("Enter a Year");
    scanf("%d",&Year);
    if(Year%400 == 0)
    {
        printf("\nLeap Year\n");
    }
    else if((Year%4==0)&& (Year%100!=0))
    {
        printf("\nLeap Year\n");
    }
    else{
        printf("\n Not a Leap Year \n");
    }

}



