///Write a program which accept one number , two positions from user and
///check whether bit at first or bit at second position is ON or OFF.

#include<stdio.h>
#include<conio.h>
typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    if(((iNo1 >> 8)&1) || ((iNo >> 11)&1))
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return iCnt;
}
int main()
{
    UINT iValue = 0;
    int iLoc1 = 0 , iLoc2 = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iValue);

    printf("\n Enter 2 Positions : ");
    scanf("%d%d",&iLoc1 , iLoc2);

    ChkBit(iValue);

    getch();
    return 0;
}
