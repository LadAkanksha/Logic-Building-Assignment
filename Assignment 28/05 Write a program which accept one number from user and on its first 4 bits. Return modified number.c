///Write a program which accept one number from user and on its first 4
///bits. Return modified number.

#include<stdio.h>
#include<conio.h>
typedef unsigned int UINT;

UINT OnBit(UINT num)
{
    if(!(num & 1))
    {
        num = num ^ 1;
    }
    if(!((num >> 1) &1))
    {
        num = num ^ (1 << 1);
    }
    if(!((num >> 2) &1))
    {
        num = num ^ (1 << 2);
    }
    if(!((num >> 3) &1))
    {
        num = num ^ (1 << 3);
    }
    return num;
}
int main()
{
    UINT ret = 0,val = 0;

    printf("\nEnter A Number : ");
    scanf("%d",&val);
    ret = OnBit(val);

    printf("\nAfter ON first 4th Bit of %d modified Value =>  %d.",val , ret);
    getch();
    return 0;
}

