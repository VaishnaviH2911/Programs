#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("Jay Ganesh....\n");
    }

}

int main()
{
    int iValue;
    printf("Enter no. of times u want to displahy Jay Ganesh on screen:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}