#include<stdio.h>
#include<conio.h>

void NonFact(int iNo)
{
    int i = 0;
    for( i = 1 ; i <= iNo ; ++i)
    {
        if(iNo%i != 0 )
        {
            printf("\t%d",i);
        }
    }
}
int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("\nEnter Number :");
    scanf("%d",&iValue);

    NonFact(iValue);

    getch();
    return 0;
}
