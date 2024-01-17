#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt=0;
    int FactSum=0;
    int NonFactSum=0;
    int iDiff=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            FactSum=FactSum+iCnt;
        }
        if(iNo%iCnt!=0)
        {
            NonFactSum=NonFactSum+iCnt;
        }
    }
    iDiff=(FactSum-NonFactSum);
    return iDiff;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}