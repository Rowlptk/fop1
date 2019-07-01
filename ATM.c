#include<stdio.h>
void check_balance();
void withdraw();
void deposit();

int T = 1000;
void main()
{
    int ch;
    printf("********** ATM ************\n");
    printf("Enter\n1. Check Balance\n2. Withdraw\n3. Deposit\n   Select: ");
    scanf("%d",&ch);
    if(ch==1)
    {
        check_balance();
    }
    else if(ch==2)
    {
        withdraw();
    }
    else if(ch==3)
    {
        deposit();
    }
    else{
        printf("Invalid Option");
    }
}


void check_balance()
{
    printf("\nYour Current Balance is %d\n",T);
}

void withdraw()
{
    int WA;
    printf("\nEnter the Amount you want to withdraw: ");
    scanf("%d",&WA);
    T = T - WA;
    printf("\nWithdraw Amount : %d\nTotal Balance : %d\n",WA,T);
}
void deposit()
{
    int DA;
    printf("\nEnter the Amount you want to Deposit: ");
    scanf("%d",&DA);
    T = T + DA;
    printf("\nDeposit Amount : %d\nTotal Balance : %d\n",DA,T);
}
