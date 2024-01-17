#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    if(iStandard>5)  //filter
    {
        printf("Invalid input\n");
    }
    if(iStandard==1)
    {
        printf("Your exam is at 8 am \n");
    }
    else if(iStandard==2)
    {
        printf("Your exam is at 9 am \n");
    }
    else if(iStandard==3)
    {
        printf("Your exam is at 10 am \n");
    }
    else if(iStandard==4)
    {
        printf("Your exam is at 11 am \n");
    }
    else if(iStandard==5)
    {
        printf("Your exam is at 12 NOON \n");
    }
}


int main()
{
   int iValue=0;

   printf("Enter your standard:\n");
   scanf("%d",&iValue);

   DisplayExamTime(iValue);

    return 0;
}