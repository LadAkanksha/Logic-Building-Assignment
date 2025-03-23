#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str , char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
       str++;
    }
    return FALSE;
}
int main()
{
    char cArr[20] = "" , cValue = '\0';
    BOOL bRet = FALSE;

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",&cArr);
    fflush(stdin);
    printf("\nEnter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkChar(cArr,cValue);

    if(bRet == TRUE)
    {
        printf("\nCharacter Found");
    }
    else
    {
        printf("\nCharacter Not Found");
    }

    getch();
    return 0;
}
