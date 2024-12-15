#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chkZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("\nEnter Value : ");
    scanf("%d",&iValue);

    bRet = chkZero(iValue);

    if(bRet == TRUE)
    {
        printf("\nIt Contains Zero.");
    }
    else
    {
        printf("\nThere is no Zero.");
    }
    getch();
    return 0;
}
