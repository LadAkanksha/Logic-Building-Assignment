/// Write a program which checks whether 7th & 8th & 9th bit is On or OFF

#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

void ChkBit(UINT n)
{
    printf("\n");
    if((n & 1) && (n >>31)&1)
    {
        printf("Both First And Last Bit for %d is ON",n);
    }
    else if((n & 1))
    {
        printf("First is ON And Last Bit is OFF for %d.",n);
    }
    else if((n >> 31)&1)
    {
        printf("First is OFF And Last Bit is ON for %d.",n);
    }
    else
    {
        printf("Both First And Last Bit for %d is OFF",n);
    }
}
int main()
{
    int val = 0;

    printf("\nEnter A Number : ");
    scanf("%d",&val);
    ChkBit(val);
    getch();
    return 0;
}
