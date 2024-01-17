#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    int iNo1=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iNo1=iCnt*2;
        printf("%d\t",iNo1);
    }
}
   
int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}