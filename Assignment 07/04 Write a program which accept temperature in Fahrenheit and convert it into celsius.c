#include<stdio.h>
#include<conio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32)*5/9;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\nEnter Temprature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("\n%lf.",dRet);

    getch();
    return 0;
}
