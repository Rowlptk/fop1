#include<stdio.h>

void main()
{
    char ch,ex;
    FILE *fp;
    fp = fopen("nayaFile.txt","a");
    printf("Enter Exiting Character : ");
    scanf(" %c",&ex);
    getchar();
    printf("Enter Something: ");
    while(ch!=ex)
    {
        ch = getchar();
        if(ch!=ex)
        {
            fputc(ch,fp);
        }

    }
    fclose(fp);
    fp = fopen("nayaFile.txt","r");
    if(fp == NULL)
    {
        printf("file not found!");
    }
    else
    {
        while(!feof(fp))
        {
           ch = fgetc(fp);
           putchar(ch);
        }
    }
    fclose(fp);








}
