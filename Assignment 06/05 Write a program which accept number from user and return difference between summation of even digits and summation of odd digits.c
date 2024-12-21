#include<stdio.h>
#include<conio.h>

int CountDiff(int iNo)
{
    int iDigit = 0 , iESum = 0 , iOSum = 0 ;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo%10;

        if(iDigit % 2 == 0)
        {
            iESum += iDigit;
        }
        else
        {
            iOSum += iDigit;
        }
        iNo = iNo/10;
    }
    return iESum - iOSum;
}
int main()
{
    int iValue = 0 , iRet = 0 ;
    printf("\nEnter Value : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("\n%d",iRet);

    getch();
    return 0;
}
