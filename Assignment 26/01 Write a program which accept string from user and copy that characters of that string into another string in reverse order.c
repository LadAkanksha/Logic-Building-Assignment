#include<stdio.h>
#include<conio.h>
#include<string.h>

int StrCpyRev(char *src,char *dest)
{
    int i = 0 , iLength = 0;
    char ch = '\0';

    /// Approach 1 --->

    ///strrev(src);

    /// Approach 2 --->


    iLength = strlen(src);
    iLength--;
    while(src[i] != '\0')
    {
        dest[i] = src[iLength];
        iLength--;
        i++;
    }
    printf("%s",src);
}
int main()
{
    char cArr[30] = "Marvellous Python" , cBrr[30]="";

    StrCpyRev(cArr,cBrr);

    printf("\n%s.",cBrr);

    getch();
    return 0;
}
