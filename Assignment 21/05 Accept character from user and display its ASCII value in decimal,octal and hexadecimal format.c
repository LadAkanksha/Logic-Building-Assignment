#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    printf("\nDecimal       : %d",ch);
    printf("\nOctal         : %o",ch);
    printf("\nHexadecimal   : %x",ch);
}
int main()
{
    char cValue = '\0';

    printf("\nEnter the Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
