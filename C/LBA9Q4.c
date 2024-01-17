#include<stdio.h>

double FhtoCs(float fTemp)
{
    double cel=0.0;

    cel=((fTemp-32)*(5.0/9.0));

    return cel;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);

    printf("Tempreture in celsius is %f",dRet);

    return 0;
}