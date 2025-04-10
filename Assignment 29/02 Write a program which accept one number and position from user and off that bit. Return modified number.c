///Write a program which accept one number and position from user and off
///that bit. Return modified number.

#include<stdio.h>
#include<conio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo , int iPos)
{
    if((iNo >> (iPos-1)) & 1)
    {
        iNo = iNo ^ (1 << (iPos - 1));
    }
    return iNo;
}
int main()
{
    int iRes = 0, iLoc = 0;
    UINT iVal = 0 ;

    printf("\nEnter A Number : ");
    scanf("%d",&iVal);

    printf("\nEnter Position of Bit : ");
    scanf("%d",&iLoc);
    iRes = OffBit(iVal , iLoc);

    printf("\nValue After Turning OFF %d Bit of %d = %d.",iLoc , iVal , iRes);
    getch();
    return 0;
}

