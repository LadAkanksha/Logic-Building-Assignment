///Write a program which accept one number from user and off 7th and 10th
///bit of that number. Return modified number.

#include<stdio.h>
#include<conio.h>
typedef unsigned int UINT;

UINT OffBit(int num)
{
    if(((num >> 6)&1) && ((num >> 9)&1))
    {
        num = (num) ^ (1 << 6) ^ ((1 << 9));
    }
    else if((num >> 6)&1)
    {
        num = (num) ^ (1 << 6);

    }
    else if((num >> 9)&1)
    {
        num = (num)^ ((1 << 9));

    }
    return num;
}
int main()
{
    int val = 0;
    UINT ret = 0;

    printf("\nEnter A Number : ");
    scanf("%d",&val);
    ret = OffBit(val);

    printf("After OFF 7th Bit and 10th Bit of %d modified Value =>  %d.",val , ret);
    getch();
    return 0;
}

