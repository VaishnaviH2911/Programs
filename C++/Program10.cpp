#include<stdio.h>
#include<stdbool.h>

/*
    START
        Accept no from user
        Divide no by 2
        If remainder is 0 then display even
        otherwise display odd
    STOP
*/

bool CheckEven(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the no:");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);

    if(bRet==true)
    {
        printf("%d is an even number",iValue);
    }
    else{
        printf("%d is odd number",iValue);
    }
    return 0;
}