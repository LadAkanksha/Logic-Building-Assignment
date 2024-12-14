#include<stdio.h>
#include<conio.h>

int FactDiff(int iNo)
{
    int i = 0 , iFSum = 0 , iNFSum = 0 , iDiff = 0;
    for( i = 1 ; i < iNo ; ++i)
    {
        if(iNo % i == 0)
        {
            iFSum += i;
        }
        else
        {
            iNFSum += i;
        }
    }
    return iFSum-iNFSum;
}
int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("\nEnter Number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    getch();
    return 0;
}
