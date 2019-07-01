#include<stdio.h>
// Exit Controlled Loop
void main()
{
    int i;

    do{
        printf("Enter 5 to exit loop");
        scanf("%d",&i);
    }while(i!=5);
}
