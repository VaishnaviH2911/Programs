#include<stdio.h>

double SquareMeter(int iValue)
{
    double meter=0.0;

    meter=0.0929*iValue;
    return meter;
}

int main()
{
    float fValue=0;
    double dRet=0.0;

    printf("Enter area in square feet:");
    scanf("%f",&fValue);

    dRet=SquareMeter(fValue);

    printf("Area in square meter is %f",dRet);
}