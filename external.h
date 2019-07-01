int T = 1000;
void auth()
{
    int pin = 1234;
    int usrpin,option;
    printf("Enter Your PIN to View menu: ");
    scanf("%d",&usrpin);
    if(pin == usrpin)
    {
            option = menu();
            select(option);
    }
    else
    {
            printf("Invalid Pin Code : \n");
            auth();
    }
}
int menu()
{
        int n;
        printf("******************* ATM *********************\n");
        printf("Menu : \n1. Check Balance\n2. Withdraw\n3. Deposit\n4. Exit\n    Option: ");
        scanf("%d",&n);
        return n;
}
void select(int option)
{
    switch(option)
    {
    case 1:
        check_balance();
        proceed();
        break;
    case 2:
        withdraw();
        proceed();
        break;
    case 3:
        deposit();
        proceed();
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("Invalid Option, Your Session is terminated : \n");
        auth();
    }
}
void check_balance()
{
    printf("Your Current Balance is %d",T);
}
void withdraw()
{
    int WA;
    printf("Enter the Withdraw Amount : ");
    scanf("%d",&WA);
    if(WA<=T)
    {
        if(WA%500 == 0)
        {
            T = T-WA;
            printf("\nWithdraw Amount : %d\n",WA);
            printf("Total Remaining Balance : %d\n",T);
            // repeat hunu parxa menu;
        }
        else
        {
            printf("\Amount must be the multiple of 500\n");
            withdraw();
        }
    }
    else
    {
        printf("\nYou dont have enough balance, \nyour session is terminated \n");
        auth();
    }
}

void deposit()
{
    int DA;
    printf("Enter the Deposit Amount : ");
    scanf("%d",&DA);
    if(DA<=2000)
    {
        T = T + DA;
        printf("\nDeposited Amount : %d\n",DA);
        printf("Total Balance Now : %d\n",T);
    }
    else
    {
        printf("\nAmount above 2000 Cannot be deposited,\n your session is terminated\n");
        auth();
    }
}

void proceed()
{
        int check,option;

        printf("\nDo you want to continue... press 0 ");
        scanf("%d",&check);
        system("cls");
        if(check == 0)
        {
            option = menu();
            select(option);
        }
        else{
            exit(0);
        }
}












