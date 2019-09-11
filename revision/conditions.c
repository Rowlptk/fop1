/*
if
if.. else
if... else if.... else
nested if
switch..case
*/
#include<stdio.h>
void main()
{
    int usr,pwd;
    printf("Enter a usercode : ");
    scanf("%d",&usr);
    printf("Enter a password : ");
    scanf("%d",&pwd);
    system("cls");
    if(usr==12345)
    {
        if (pwd == 1000)
        {
           printf("\nUsername 1 and password is correct\n");
        }
        else
        {
            printf("\nUsername 1 correct but password is incorrect\n");
        }
        //printf("\nUserCode and Password is Valid 1\n");
    }
    else if(usr==98765 && pwd==1001)
    {
        printf("\nUserCode and Password is Valid 2\n");
    }
    else
    {
        printf("\nUserCode and Password is inValid\n");
    }

}







