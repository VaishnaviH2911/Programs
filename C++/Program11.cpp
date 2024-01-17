#include<stdio.h>

float CalculatePercentage(int iMarks,int iTotal)
{
    float fPercentage=0.0f;
    fPercentage=(((float)iMarks/(float)iTotal)*100);
    return fPercentage;
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    float fRet=0.0f;

    printf("Enter the marks:\n");
    scanf("%d",&iValue1);

    printf("Enter the total marks:\n");
    scanf("%d",&iValue2);

    fRet=CalculatePercentage(iValue1,iValue2);

    printf("Your Percentage is:%f",fRet);

    return 0;

}