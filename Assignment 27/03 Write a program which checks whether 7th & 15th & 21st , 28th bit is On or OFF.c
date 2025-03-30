/// Write a program which checks whether 7th , 15th , 21st & 28th bit is On or OFF.

#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

void ChkBit(UINT n)
{
    printf("\n\n\t");
    if((n >> 6)&1)
    {
        printf(" 7th Bit -");
    }
    if((n >> 14)&1)
    {
        printf(" 15th Bit -");
    }
    if((n >> 20)&1)
    {
        printf(" 21th Bit -");
    }
    if((n >> 27)&1)
    {
        printf(" 27th Bit -");
    }
    printf("\bof %d is ON.",n);
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
