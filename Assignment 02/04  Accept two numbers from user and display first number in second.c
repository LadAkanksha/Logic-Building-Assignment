/// Accept two numbers from user and display first number in second
///number of times.

#include<stdio.h>
#include<conio.h>

void Display(int iNo , int iFrequency)
{
      int i = 0;
      for(i = iFrequency ; i>0 ; i--)
      {
          printf(" %d ",iNo);
      }
}

int main()
{
     int iValue = 0 , iCount = 0 ;

     printf("\nEnter Number : ");
     scanf("%d",&iValue);
     printf("\nEnter Frequency : ");
     scanf("%d",&iCount);
     if(iCount < 0)
     {
         iCount = iCount*(-1);
     }
     Display(iValue , iCount);
     return 0;
}

