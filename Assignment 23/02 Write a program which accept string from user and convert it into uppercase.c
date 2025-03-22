#include<stdio.h>
#include<conio.h>
#include<string.h>
void struprx(char *str)
{
    int i = 0 , j = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str -= 32;
        }
       str++;
    }
}
int main()
{
    char cArr[20] = "";

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",&cArr);

    struprx(cArr);

    printf("\nModified String is %s.",cArr);
    getch();
    return 0;
}
