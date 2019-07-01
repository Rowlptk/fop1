#include<stdio.h>
#include<string.h>

void main()
{
    char str1[50],str2[50];
    int test;
    printf("Enter First String : ");
    gets(str1);
    printf("Enter Second String : ");
    gets(str2);
    //strcat(str1,str2);
    //strcpy(str1,str2);
    //puts(str1);
    //puts(str2);
    test = strcmp(str1,str2);
    //printf(" %d ",test);
    if(test == 0)
    {
        printf("\nEqual\n");
    }
    else if(test > 0)
    {
        printf("\nString 1 is greater \n");
    }
    else{
        printf("\nString 2 is greater \n");
    }
}
