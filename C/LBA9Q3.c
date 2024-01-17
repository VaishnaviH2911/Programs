#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Meter=0;

    Meter=iNo*1000;

    return Meter;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter Distance:");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("Distance in meter is %d",iRet);

    return 0;
}