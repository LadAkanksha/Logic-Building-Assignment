#include<stdio.h>
#include<conio.h>
#include<string.h>

void StrCpyX(char *src , char *dest)
{
    /*while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }*/
    strcpy(dest,src);

}
int main()
{
    char cArr[30] = "Marvellous Multi OS" , cBrr[30] = "";

    StrCpyX(cArr,cBrr);

    printf("\n%s",cBrr);

    getch();
    return 0;
}
