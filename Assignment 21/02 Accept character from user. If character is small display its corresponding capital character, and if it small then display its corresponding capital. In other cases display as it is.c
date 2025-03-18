#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        ch += 32;
        printf("%c",ch);
    }
    else if(ch >= 97 && ch <= 122)
    {
        ch -= 32;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("\nEnter the Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
