#include<stdio.h>
#include<conio.h>

int KMtoMeter(int iNo)
{
    return iNo*1000;
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("\nEnter Distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("\n%d.",iRet);

    getch();
    return 0;
}
