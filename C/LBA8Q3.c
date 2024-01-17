#include<stdio.h>

int EvenFactorial(int iNo)
{
    int i=0;
    int fact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(i=1;i<=iNo;i++)
    {
        if(i%2==0)
        {
            fact=fact*i;
        }
    }
    return fact;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}