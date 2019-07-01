#include<stdio.h>


void main()
{
    char name[20];
    char nam;
    //printf("Enter Your Name: ");
    //scanf(" %s",name);
    //gets(name);
    //puts(name);
    printf("Enter a Character: ");
    nam = getchar();
    nam = tolower(nam);
    putchar(nam);
    //printf("\nMy name is %s",name);
}
