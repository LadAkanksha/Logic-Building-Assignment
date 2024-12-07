/// Accept one character from user and convert case of that character.

#include<stdio.h>
#include<conio.h>

void Display(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c",cValue+32);
    }
    else
    {
        printf("%c",cValue-32);
    }
}
int main()
{
     char cValue = '\0';

     printf("\nEnter Character : ");
     scanf("%c",&cValue);

     Display(cValue);
     return 0;
}

