#include<stdio.h>
int FactorialDiff(int iNo)
{
    int i=0;
    int EvenFact=1;
    int OddFact=1;
    int Diff=0; 

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(i=1;i<=iNo;i++)
    {
        if(i%2==0)
        {
            EvenFact=EvenFact*i;
        }
    }
    for(i=1;i<=iNo;i++)
    {
        if(i%2!=0)
        {
            OddFact=OddFact*i;
        }
    }

    Diff=(EvenFact-OddFact);

    return Diff;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Factorial difference %d",iRet);

    return 0;
}