
#include<stdio.h>
#include<conio.h>
#include<string.h>

int StrCpyX(char *src,char *dest)
{
    int i = 0 , j = 0;

    while( src[i] != '\0' )
    {
        if(src[i] == ' ')
        {
            for( j = i ; src[j] != '\0' ; ++j)
            {
                src[j] = src[j+1];
            }
        }
        i++;
    }
    strcpy(dest,src);
    printf("\nString is %s",src);
}
int main()
{
    char cArr[30] = "Marvel lous Pyth on" , cBrr[30]="";

    StrCpyX(cArr,cBrr);

    printf("\n%s.",cBrr);

    getch();
    return 0;
}
