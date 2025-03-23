#include<stdio.h>
#include<conio.h>

int LastChar(char *str , char ch)
{
    int i = 0 , iLast = -1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLast = i;
        }
        ++i;
       str++;
    }
    return iLast;
}
int main()
{
    char cArr[20] = "" , cValue = '\0';
    int iRet = 0;

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",&cArr);
    fflush(stdin);
    printf("\nEnter the Character : ");
    scanf("%c",&cValue);

    iRet = LastChar(cArr,cValue);

    printf("\nCharacter location is %d.",iRet);

    getch();
    return 0;
}
