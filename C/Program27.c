#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d ",iCnt);
    }
}


int main()
{
    int iValue=0;

    printf("Enter no. of times u want to display on screen:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}