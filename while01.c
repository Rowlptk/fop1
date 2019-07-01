#include<stdio.h>
// Entry Controlled Loop
void main()
{
    int i = 5;
    while(i!=5)
    {
        printf("Enter 5 to exit loop");
        scanf("%d",&i);
    }
}
