#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    printf("Enter a String: ");
    gets(str);
    printf("\nThe length of string is %d \n\n",strlen(str));
    strupr(str);
    puts(str);
    printf("\n");
    strlwr(str);
    puts(str);
    printf("\n");
    strrev(str);
    puts(str);
}
