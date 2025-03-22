#include<stdio.h>
#include<conio.h>
#include<string.h>
void strlwrx(char *str)
{
    int i = 0 , j = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str += 32;
        }
       str++;
    }
}
int main()
{
    char cArr[20] = "";

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",&cArr);

    strlwrx(cArr);

    printf("\nModified String is %s.",cArr);
    getch();
    return 0;
}
