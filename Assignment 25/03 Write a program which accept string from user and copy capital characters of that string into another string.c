#include<stdio.h>
#include<conio.h>
#include<string.h>

void StrCpyCap(char *src , char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
}
int main()
{
    char cArr[30] = "Marvellous Multi OS" , cBrr[30] = "";

    StrCpyCap(cArr,cBrr);

    printf("\n%s",cBrr);

    getch();
    return 0;
}
