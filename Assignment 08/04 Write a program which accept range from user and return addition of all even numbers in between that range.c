#include<stdio.h>
#include<conio.h>

int RangeSumEven(int iStart , int iEnd)
{
    int i = 0 , iSum = 0;
    for( i = iStart ; i <= iEnd ; ++i)
    {
        if(i % 2 == 0)
        {
            iSum += i;
        }
    }
    return iSum;
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 , iRet = 0;

    printf("\nEnter Starting Point : ");
    scanf("%d",&iValue1);
    printf("\nEnter Ending Point :");
    scanf("%d",&iValue2);

    if(iValue1 < 0 || iValue2 < 0 || iValue1 > iValue2)
    {
        printf("\nInvalid Renge");
        return 0;
    }
    iRet = RangeSumEven(iValue1 , iValue2);

    printf("\nAddition is %d",iRet);
    getch();
    return 0;
}
