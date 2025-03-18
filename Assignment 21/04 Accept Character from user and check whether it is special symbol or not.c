#include<stdio.h>
#include<conio.h>
#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkSpecial(char ch)
{

    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)||(ch >= 48 && ch <= 57))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\nEnter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("\nIt is special character");
    }
    else
    {
        printf("\nIt is not special character");
    }
    return 0;
}
