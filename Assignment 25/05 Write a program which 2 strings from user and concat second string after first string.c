#include<stdio.h>
#include<conio.h>
#include<string.h>

void StrCatX(char *src , char *dest)
{
    ///Method 1
    while(*src != '\0')
    {
        src++;
    }
    *src = ' ';
    src++;
    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *dest = '\0';

    /// Mathod 2
    strcat(src,dest);
}
int main()
{
    char cArr[50] = "Marvellous Infosystems" , cBrr[30] = "Logic Building";

    StrCatX(cArr,cBrr);

    printf("\n%s",cArr);

    getch();
    return 0;
}
