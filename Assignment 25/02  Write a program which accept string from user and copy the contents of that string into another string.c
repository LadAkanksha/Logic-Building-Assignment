#include<stdio.h>
#include<conio.h>
#include<string.h>

void StrNCpyX(char *src , char *dest,int iCnt)
{
    if(strlen(src) < iCnt )
    {
        strcpy(dest,src);
    }
    else
    {
        /*while((*src != '\0')&&(iCnt != 0))
        {
            *dest = *src;
            src++;
            dest++;
            iCnt--;
        }*/

        strncpy(dest,src,10);
    }

}
int main()
{
    char cArr[30] = "Marvellous Multi OS" , cBrr[30] = "";

    StrNCpyX(cArr,cBrr,10);

    printf("\n%s",cBrr);

    getch();
    return 0;
}
