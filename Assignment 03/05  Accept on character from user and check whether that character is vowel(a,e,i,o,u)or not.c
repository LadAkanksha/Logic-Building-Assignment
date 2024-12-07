///Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char cValue)
{
    if( cValue == 'A' || cValue == 'a'|| cValue == 'E' || cValue == 'e'|| cValue == 'I' || cValue == 'i'|| cValue == 'O' || cValue == 'o'|| cValue == 'U' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
     char cValue = '\0';
     BOOL bRet = FALSE;

     printf("\nEnter Character : ");
     scanf("%c",&cValue);

     bRet = ChkVowel(cValue);

     if(bRet == TRUE)
     {
         printf("\nIt is Vowel");
     }
     else
     {
         printf("\nIt is not Vowel");
     }
     return 0;
}

