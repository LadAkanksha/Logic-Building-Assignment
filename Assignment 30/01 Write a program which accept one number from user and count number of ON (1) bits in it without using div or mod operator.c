///Write a program which accept one number from user and count number of
///ON (1) bits in it without using % and / operator.

#include<stdio.h>
#include<conio.h>
typedef unsigned int UINT;
int CountOne(UINT iNo)
{
    int iItr = 1 , iCnt = 0;

    while(32 >= iItr)
    {
        if((iNo >> iItr)&1)
        {
            iCnt++;
        }
        iItr++;
    }
    return iCnt;
}
int main()
{
    UINT iValue = 0;
    int iRes = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iValue);

    iRes = CountOne(iValue);

    printf("\nTotal 1's in %d = %d",iValue,iRes);
    getch();
    return 0;
}
