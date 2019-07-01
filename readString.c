#include<stdio.h>
//#include<string.h>

void main()
{
    char ch;
    while(ch!='\n')
    {
        ch = getchar();
        ch = tolower(ch);
        if(ch == 's')
        {
            ch = 't';
            putchar(ch);
        }
        else
        {
            putchar(ch);
        }
    }
}
