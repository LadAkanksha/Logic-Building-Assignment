#include<stdio.h>
#include<conio.h>

void Pattern(int iRow ,int iCol)
{
    int i = 0 , j = 0 ,iNum = 0;
    for( i = iRow, iNum = 1; i >= 1 ; --i)
    {
        for( j = 1 ; j <= iCol ; ++j , ++iNum)
        {
            printf("\t%d",iNum);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\nEnter Number of Rows and Columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    getch();
    return 0;
}
