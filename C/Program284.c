#include<stdio.h>

int Factorial(int iNo)
{
    static int iCnt=1;
    static int iFact=1;

    if(iCnt<=iNo)
    {
        iFact=iFact*iCnt;
        iCnt++;

        Factorial(iNo);
    }
    return iFact;
}

int main()
{
    int iValue=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    int iRet=Factorial(iValue);
    printf("Factorial is:%d",iRet);

    return 0;
}