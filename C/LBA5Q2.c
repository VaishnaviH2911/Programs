#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo>100)
    {
        return 1;
    }
    else if(iNo<100)
    {
        return 0;
    }

}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Please enter number:");
    scanf("%d",&iValue);

    bRet=ChkGreater(iValue);

    if(bRet==1)
    {
        printf("Greater");
    }
    else{
        printf("Smaller");
    }
    return 0;
}