#include<stdio.h>
#include<conio.h>

int CountTwo(int iNo)
{
    int iDigit = 0 , iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("\nEnter Value : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

   printf("\n%d",iRet);

    getch();
    return 0;
}