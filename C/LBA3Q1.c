#include<stdio.h>
#include<stdbool.h>

void PrintEven(int iNo)
{
    int iCnt=0;
    //bool bFlag=true;
    
    if(iNo<=0)
    {
        return -1;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d",iCnt);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter number:\n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}