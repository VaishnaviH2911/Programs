#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define False 2

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1==iNo2)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    BOOL bRet=False;

    printf("Please enter two number:");
    scanf("%d%d",&iValue1,&iValue2);

    bRet=ChkEqual(iValue1,iValue2);

    if(bRet==1)
    {
        printf("Equal");
    }
    else{
        printf("Not equal");
    }
    return 0;
}