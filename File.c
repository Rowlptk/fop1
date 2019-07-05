#include<stdio.h>

void main()
{
    FILE *fp;
    char str[100];
    fp = fopen("myfile.txt","a");
    printf("Enter something : ");
    gets(str);
    fprintf(fp,"%s",str);
    fclose(fp);
}
