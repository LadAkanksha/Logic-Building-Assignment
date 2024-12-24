#include<stdio.h>
#include<conio.h>

double SquareMeter(int iValue)
{
    return (double)iValue*0.0929;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("\nEnter Area in Square Feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("\n%lf",dRet);

    getch();
    return 0;
}
