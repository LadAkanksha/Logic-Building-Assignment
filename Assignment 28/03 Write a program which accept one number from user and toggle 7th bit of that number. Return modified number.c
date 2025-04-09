///Write a program which accept one number from user and toggle 7th bit of
///that number. Return modified number.

#include<stdio.h>
#include<conio.h>
typedef unsigned int UINT;

UINT ToggleBit(int num)
{
    num = num ^ (1 << 6);
    return num;
}
int main()
{
    int val = 0;
    UINT ret = 0;

    printf("\nEnter A Number : ");
    scanf("%d",&val);
    ret = ToggleBit(val);

    printf("After Toggle 7th bit of %d modified Value =>  %d.",val , ret);
    getch();
    return 0;
}

