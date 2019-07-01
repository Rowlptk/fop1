#include<stdio.h>

void main()
{
    float num1, num2;
    char ch;
    printf("Enter Two Numbers  : ");
    scanf("%f%f",&num1,&num2);
    printf("Options: + ,  - ,  * , / : ");
    scanf(" %c",&ch);
    switch(ch)
    {
    case '+':
        printf("\n%f + %f = %f",num1,num2,(num1+num2));
        break;
    case '-':
        printf("\n%f - %f = %f",num1,num2,(num1-num2));
        break;
    case '*':
        printf("\n%f * %f = %f",num1,num2,(num1*num2));
        break;
    case '/':
        printf("\n%f / %f = %.2f",num1,num2,(num1/num2));
        break;
    default:
        printf("\nInvalid Symbol");
    }






}
