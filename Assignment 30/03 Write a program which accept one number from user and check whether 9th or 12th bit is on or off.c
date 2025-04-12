///Write a program which accept one number from user and check whether
///9th or 12th bit is on or off.

#include<stdio.h>
#include<conio.h>
typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo)
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

    printf("\nEnter 1st Number : ");
    scanf("%d",&iValue);

    ChkBit(iValue);

    getch();
    return 0;
}
