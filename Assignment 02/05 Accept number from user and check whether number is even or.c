///Accept number from user and check whether number is even or odd.

#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
     int iValue = 0;
     BOOL bRet = FALSE;

     printf("\nEnter Number : ");
     scanf("%d",&iValue);

     bRet = ChkEven(iValue);

     if(bRet == 1)
     {
         printf("\n%d is Even Number",iValue);
     }
     else
     {
         printf("\n%d is Odd Number.",iValue);
     }
     return 0;
}

