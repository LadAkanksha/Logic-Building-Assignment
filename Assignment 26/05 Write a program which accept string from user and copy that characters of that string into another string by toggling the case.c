
#include<stdio.h>
#include<conio.h>
#include<string.h>

int StrCpyCap(char *src,char *dest)
{
    int i = 0 , j = 0;

    while( src[i] != '\0' )
    {
        if(src[i] >= 'a' && src[i] <= 'z')
        {
            dest[i] = src[i]-32;
        }
        else if(src[i] >= 'A' && src[i] <= 'Z')
        {
            dest[i] = src[i] + 32;
        }
        else
        {
            dest[i] = src[i];
        }
        i++;
    }
}
int main()
{
    char cArr[30] = "Marvellous Python 2" , cBrr[30]="";

    StrCpyCap(cArr,cBrr);

    printf("\n%s.",cBrr);

    getch();
    return 0;
}
