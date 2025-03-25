
#include<stdio.h>
#include<conio.h>
#include<string.h>

int StrCpySmall(char *src,char *dest)
{
    int i = 0 , j = 0;

    while( src[i] != '\0' )
    {
        if(src[i] >= 'A' && src[i] <= 'Z')
        {
            dest[i] = src[i]+32;
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

    StrCpySmall(cArr,cBrr);

    printf("\n%s.",cBrr);

    getch();
    return 0;
}
