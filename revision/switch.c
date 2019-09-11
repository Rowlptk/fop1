/* aeiou ==> vowel
bahek lai  ==> consonent
alphabet bahek ==> not an alphabet
*/
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character : ");
    scanf(" %c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        switch(ch)
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("\n%c is a vowel\n",ch);
            break;

        default:
             printf("\n%c is a consonant\n",ch);
        }
    }
    else
    {
        printf("\n%c is not an Alphabet\n",ch);
    }
}












