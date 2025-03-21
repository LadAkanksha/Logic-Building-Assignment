#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    int i = 0;

    if(ch >= 65 && ch <= 90)
    {
        for( i = ch ; i <= 'Z' ; ++i )
        {
            printf(" %c ",i);
        }
    }
    else if(ch >= 97 && ch <= 122)
    {
        for( i = ch ; i >= 'a' ; --i )
        {
            printf(" %c ",i);
        }
    }
    else
    {
        printf("Wrong Input");
    }
}
int main()
{
    char cValue = '\0';

    printf("\nEnter the Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
