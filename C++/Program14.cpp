#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    switch(iStandard)
    {
        case 1:
            printf("Your exam is on 8 am\n");
            break;
        case 2:
            printf("Your exam is on 9 am\n");
            break;
        case 3:
            printf("Your exam is on 10 am\n");
            break;
        case 4:
            printf("Your exam is on 11 am\n");
            break;
        case 5:
            printf("Your exam is on 12 NOON\n");
            break;
        default:
            printf("Invalid Input....\n");
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