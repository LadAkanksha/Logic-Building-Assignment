#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int i = 0;
    for( i = 1 ; i <= iNo ; ++i)
    {
        printf("\t#\t%d\t*",i);
    }
}
int main()
{
    int iValue = 0;

    printf("\nEnter Number of Elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}
