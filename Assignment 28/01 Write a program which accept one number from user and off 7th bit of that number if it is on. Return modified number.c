///Write a program which accept one number from user and off 7th bit of that
///number if it is on. Return modified number.

#include<stdio.h>
#include<conio.h>

int OffBit(int num)
{
    if((num >> 6)&1)
    {
        num = (num) ^ (1 << 6);
    }
    return num;
}
int main()
{
    int val = 0 , ret = 0;

    printf("\nEnter A Number : ");
    scanf("%d",&val);
    ret = OffBit(val);

    printf("After OFF 7th bit of %d modified Value   =>   %d.", val , ret);
    getch();
    return 0;
}

