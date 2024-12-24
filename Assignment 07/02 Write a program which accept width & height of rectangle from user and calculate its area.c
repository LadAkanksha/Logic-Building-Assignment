#include<stdio.h>
#include<conio.h>

double RectArea(float fWidth , float fHeight)
{
    double dArea = 0.0;
    dArea = fWidth * fHeight;
    return dArea;
}
int main()
{
    float fValue1 = 0.0 , fValue2 = 0.0;
    double dRet = 0.0;

    printf("\nEnter Width : ");
    scanf("%f",&fValue1);

    printf("\nEnter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 , fValue2);

    printf("\nArea of Rectangle is %lf.",dRet);

    getch();
    return 0;
}
