#include<stdio.h>

void Factors(int iNo)
{
    static int iCnt=1;

    if(iCnt<=(iNo/2))
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        Factors(iNo);
    }
}

int main()
{
    int iValue=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Factors(iValue);
    
    return 0;
}