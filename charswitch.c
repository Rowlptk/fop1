#include<stdio.h>

void main()
{
    int num1,num2;
    char ch;
    printf("Enter two numbers ");
    scanf("%d%d",&num1,&num2);
    printf("Enter a symbol");
    scanf(" %c",&ch);
    switch(ch)
    {
    case '+':
        printf("%d + %d = %d",num1,num2,(num1+num2));
        break;
    case '-':
        printf("Minus sign");
        break;
    default:
        printf("I dont Know");
    }
}
