///Write a program which accept one number from user and print that number of even numbers on screen.

#include<stdio.h>
#include<conio.h>

void PrintEven(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
       return;
    }
    while(iNo > 0)
    {
        i+= 2;
        printf("  %d  ",i);
        iNo--;
    }
}
int main()
{
     int iValue = 0;

     printf("\nEnter Number : ");
     scanf("%d",&iValue);

     PrintEven(iValue);
     return 0;
}

