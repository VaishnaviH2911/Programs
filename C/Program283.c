#include<stdio.h>

int SumDigitsR(int iNo)
{
    int iDigit=0;
    static int iSum=0;

    if(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;

        SumDigitsR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet=SumDigitsR(iValue);
    printf("Summation of digit is:%d",iRet);

    return 0;
}