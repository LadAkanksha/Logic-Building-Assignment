#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int i = 0;
    char cLtr = '\0';

    for( i = 1 , cLtr = 'A' ; i <= 5 ; i++ , cLtr++)
    {
        printf("\t%c",cLtr);
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