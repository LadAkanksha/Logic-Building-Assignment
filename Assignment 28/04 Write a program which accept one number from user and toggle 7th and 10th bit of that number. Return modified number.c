///Write a program which accept one number from user and toggle 7th and
///10th bit of that number. Return modified number.

#include<stdio.h>
#include<conio.h>
typedef unsigned int UINT;

UINT ToogleBit(UINT num)
{
    num = num ^ (1 << 6) ^ (1 << 9);
    return num;
}
int main()
{
    UINT val = 0, ret = 0;

    printf("\nEnter A Number : ");
    scanf("%d",&val);
    ret = ToogleBit(val);

    printf("\nAfter Toggling 7th Bit and 10th Bit of %d modified Value is %d.",val , ret);
    getch();
    return 0;
}

