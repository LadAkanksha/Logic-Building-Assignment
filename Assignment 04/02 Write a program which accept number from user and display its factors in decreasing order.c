#include<stdio.h>
#include<conio.h>

void FactRev(int iNo)
{
    int i = 0;
    for( i = iNo/2 ; i > 0 ; i--)
    {
        if(iNo%i == 0 )
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

    FactRev(iValue);

    getch();
    return 0;
}
