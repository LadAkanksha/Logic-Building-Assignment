///Write a program which accept one number and position from user and
///check whether bit at that position is on or off. If bit is one return TURE
///otherwise return FALSE.

#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo , UINT iPos)
{
    if((iNo >> (iPos-1)) & 1)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    BOOL iRes = 0;
    UINT iVal = 0 , iPos = 0;

    printf("\nEnter A Number : ");
    scanf("%d",&iVal);

    printf("\nEnter Position of Bit : ");
    scanf("%d",&iPos);
    iRes = ChkBit(iVal , iPos);

    if(iRes == TRUE)
        printf("\nTRUE");
    else
        printf("\nFALSE");

    getch();
    return 0;
}

