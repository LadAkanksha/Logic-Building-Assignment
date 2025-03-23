#include<stdio.h>
#include<conio.h>

int CountChar(char *str , char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            ++iCnt;
        }
       str++;
    }
    return iCnt;
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

    iRet = CountChar(cArr,cValue);

    printf("\nCharacter Frequency is %d.",iRet);

    getch();
    return 0;
}
