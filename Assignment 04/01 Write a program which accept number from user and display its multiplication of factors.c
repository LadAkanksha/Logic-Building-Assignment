#include<stdio.h>
#include<conio.h>

int MulFact(int iNo)
{
    int iFact = 1 , i = 0;
    for( i = 1 ; i <= iNo/2 ; i++)
    {
        if(iNo%i == 0 )
        {
            iFact = iFact*i;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("\nEnter Number :");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);

    printf("\n%d",iRet);

    getch();
    return 0;
}
