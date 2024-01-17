#include<stdio.h>

float Percentage(int fTotal, int fObtained)
{
    float per=0;
    if(fObtained>fTotal)
    {
        printf("Invalid marks!!");
        return 0;
    }
    if(fObtained<fTotal)
    {
        per=((float)fObtained/(float)fTotal)*100;
    }
    return per;
}

int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0;

    printf("Please enter total marks:");
    scanf("%d",&iValue1);
    printf("Please enter obtained marks:");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);

    printf("Percentage is:%f",fRet);

    return 0;
}

