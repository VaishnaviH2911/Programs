#include<stdio.h>
#include<stdbool.h>

void DisplayFactors(int iNo)
{
    int iCnt=0;

    printf("Factors of %d are:\n",iNo);
         //1      2       3
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)  //4
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}
//Time complexity : O(N)

/*
    O(N)
    O(2N)
    O(N^2)
    O(N^3)
    O(N/2)
    O(N/4)
*/