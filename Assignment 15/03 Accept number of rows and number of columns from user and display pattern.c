#include<stdio.h>
#include<conio.h>

void Pattern(int iRow ,int iCol)
{
    int i = 0 , j = 0 ;
    for( i = 1; i <= iRow ; ++i )
    {
        for( j = 1 ; j <= iCol ; ++j )
        {
            if(  i+j == iCol+1 || i ==1 || j == 1 || i == iRow || j ==iCol)
            {
                printf("  *  ");
            }
            else
            {
                printf("     ");
            }
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
