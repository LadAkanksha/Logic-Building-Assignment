#include<stdio.h>
#include<conio.h>

int MultDigits(int iNo)
{
    int iDigit = 0 , iMult = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo%10;
        if(iDigit != 0)
        {
            iMult *= iDigit;
        }
        iNo = iNo/10;
    }
    return iMult;
}
int main()
{
    int iValue = 0 , iRet = 0 ;
    printf("\nEnter Value : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("\n%d",iRet);

    getch();
    return 0;
}
