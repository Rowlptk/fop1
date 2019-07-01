#include<stdio.h>

void main()
{
    int rem,n,rev;
    n = 123;
    rev = 0;
    while(n!=0)
    {
            rem=n%10;
            n = n/10;
            rev = rev*10+rem;
    }
    printf("%d",rev);
}
