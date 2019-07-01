#include<stdio.h>

void main()
{
    char je[30];
    int i,count=0;
    printf("Enter the string : ");
    gets(je);
    for(i=0;je[i]!='\0';i++)
    {
        if(je[i]=='s')
        {
            count += 1;
        }
    }
    printf("frquency of s is %d ",count);
}
