#include<stdio.h>
#include<conio.h>

int RangeDisplayRev(int iStart , int iEnd)
{
    int i = 0;
    for( i = iEnd ; i >= iStart ; --i)
    {
        printf("\t%d",i);
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("\nEnter Starting Point : ");
    scanf("%d",&iValue1);
    printf("\nEnter Ending Point :");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1 , iValue2);

    getch();
    return 0;
}
