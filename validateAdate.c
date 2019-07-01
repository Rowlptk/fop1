#include<stdio.h>
void main()
{
    int y,m,d;
    printf("Enter a Date [yyyy-mm-dd] ");
    scanf("%d-%d-%d",&y,&m,&d);
   //printf("year = %d\nmonth=%d\nday=%d",y,m,d);
    if(y>=1800 && y<=2200)
    {
        //printf("\nYear is valid\n");
        if(m>=1 && m<=12)
        {
            //printf("\nYear and Month is valid\n");
            if(d>=1 && d<=30)
            {
              printf("\nYear, month and day is valid, hence date is valid\n");
            }
            else
            {
                printf("\n Year and month is valid but day is invalid\n");
            }
        }
        else
        {
            printf("\nYear is valid but month is invalid\n");
        }
    }
    else{
        printf("\nYear is invalid\n");
    }

}
