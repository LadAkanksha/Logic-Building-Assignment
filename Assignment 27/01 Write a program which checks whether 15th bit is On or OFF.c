/// Write a program which checks whether 15th bit is On or OFF.


#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT n)
{
    if((n>>14) & 1)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    int val = 0 , res = 0;

    printf("\nEnter A Number : ");
    scanf("%d",&val);

    res = ChkBit(val);
    if(res == 1)
    {
        printf("15th bit of %d is ON.",val);
    }
    else
    {
        printf("15th bit of %d is OFF.",val);
    }
    getch();
    return 0;
}
