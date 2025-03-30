/// Write a program which checks whether 5th & 18th bit is On or OFF.


#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

void ChkBit(UINT n)
{
    if(((n >> 4) & 1 ) && ((n >> 17) & 1))
    {
        printf("\nBoth 5th and 18th bit of %d is ON.",n);
    }
    else if((n >> 4) & 1)
    {
        printf("\n5th bit of %d is ON and 18th bit is OFF.",n);
    }
    else if((n >> 17) & 1)
    {
        printf("\n5th bit of %d is OFF and 18th bit is ON.",n);
    }
    else
    {
        printf("\nBoth 5th bit and 18th bit of %d is OFF.",n);
    }
}
int main()
{
    int val = 0 , res = 0;

    printf("\nEnter A Number : ");
    scanf("%d",&val);
    ChkBit(val);
    getch();
    return 0;
}
