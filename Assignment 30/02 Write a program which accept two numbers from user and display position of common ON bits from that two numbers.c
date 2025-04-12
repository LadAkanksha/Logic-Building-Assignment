///Write a program which accept two numbers from user and display position
///of common ON bits from that two numbers.

#include<stdio.h>
#include<conio.h>
typedef unsigned int UINT;

void CommonBits(UINT iNo1 , UINT iNo2)
{
    int iItr = 0 , iCnt = 0;

    while(32 >= iItr)
    {
        if(((iNo1 >> iItr)&1) && ((iNo2 >> iItr)&1))
        {
            printf("%d\t",iItr+1);
        }
        iItr++;
    }
    return iCnt;
}
int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("\nEnter 1st Number : ");
    scanf("%d",&iValue1);

    printf("\nEnter 2nd Number : ");
    scanf("%d",&iValue2);

    CommonBits(iValue1 , iValue2);

    getch();
    return 0;
}
