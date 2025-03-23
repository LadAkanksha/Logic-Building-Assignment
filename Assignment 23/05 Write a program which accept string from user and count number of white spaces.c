#include<stdio.h>
#include<conio.h>
#include<string.h>

int CountWhite(char *str)
{
    int i = 0 , iWhite = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            ++iWhite;
        }
       str++;
    }
    return iWhite;
}
int main()
{
    char cArr[20] = "";
    int iRet = 0;

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",&cArr);

    iRet = CountWhite(cArr);

    printf("\n%d",iRet);

    getch();
    return 0;
}
