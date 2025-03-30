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
    if((n >> 6)&1)
    {
        printf(" 7th Bit -");
    }
    if((n >> 7)&1)
    {
        printf(" 8th Bit -");
    }
    if((n >> 8)&1)
    {
        printf(" 9th Bit -");
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
