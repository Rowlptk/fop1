#include<stdio.h>
void main(){
FILE *fp;
char ch;
fp = fopen("image001.png","rb");
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
