#include<stdio.h>
#include<conio.h>
#include<string.h>

int StrRevX(char *str)
{
    int i = 0 , iLength = 0;
    char ch = '\0';

    iLength = strlen(str);
    iLength--;
    while(str[i] != '\0')
    {
        ch = str[i];
        str[i] = str[iLength];
        str[iLength] = ch;
        iLength--;
        i++;
        if(i > iLength)
        {
            break;
        }
    }
}
int main()
{
    char cArr[20] = "";

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",&cArr);

    StrRevX(cArr);

    printf("\nModified String is %s.",cArr);

    getch();
    return 0;
}
