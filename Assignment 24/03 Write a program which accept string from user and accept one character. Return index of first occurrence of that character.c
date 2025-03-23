#include<stdio.h>
#include<conio.h>

int FirstChar(char *str , char ch)
{
    int i = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return i;
        }
        ++i;
       str++;
    }
    return -1;
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

    iRet = FirstChar(cArr,cValue);

    printf("\nCharacter location is %d.",iRet);

    getch();
    return 0;
}
