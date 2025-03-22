#include<stdio.h>
#include<conio.h>
#include<string.h>

void DisplayDigit(char *str)
{
    int i = 0;
    char cDest[20] = "";

    while(*str != '\0')
    {
        if(*str >= 48 && *str <= 57)
        {
            cDest[i] = *str;
            i++;
        }
       str++;
    }
    printf("\n %s",cDest);
}
int main()
{
    char cArr[20] = "";

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",&cArr);

    DisplayDigit(cArr);

    getch();
    return 0;
}
