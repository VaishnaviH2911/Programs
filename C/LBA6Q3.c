#include<stdio.h>

void Display(int iNo)
{
    int i=0;
    for(i=iNo;i>=1;i--)
    {
        printf("%d\t",-i);
    }
    for(i=0;i<=iNo;i++)
    {
        printf("%d\t",i);
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}