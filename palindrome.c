#include<stdio.h>
void main()
{
    int num,rev=0,rem,temp;
    printf("Enter any Number : ");
    scanf("%d",&num);
    temp = num;
    while(num!=0)
    {
        rem = num%10;
        num = num/10;
        rev = rev*10 + rem;
    }
    if(temp==rev)
    {
        printf("\nPalindrome number\n");
    }
    else{
        printf("\nNot a palindrome number\n");
    }
}
