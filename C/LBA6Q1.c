#include<stdio.h>

void Pattern(int iNo)
{
    int i=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(i=0;i<iNo;i++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}