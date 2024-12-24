#include<stdio.h>
#include<conio.h>
#define PI 3.14
double CircleArea(float fRadius)
{
    double dArea = 0.0;
    dArea = (double)PI * fRadius * fRadius;
    return dArea;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\nEnter Value : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("\nArea of Circle is %lf.",dRet);

    getch();
    return 0;
}
