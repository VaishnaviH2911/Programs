//Array
#include<stdio.h>

int EvenCountR(int Arr[],int iSize)
{
    static int iCnt=0;
    static int iEven=0;

    while(iCnt<iSize)
    {
        if(Arr[iCnt]%2==0)
        {
            iEven++;
        }
        iCnt++;
        EvenCountR(Arr,iSize);
    }
    return iEven;
}

int main()
{
    int Arr[5]={11,20,31,40,51};

    int iRet=EvenCountR(Arr,5);
    printf("Even elements are:%d",iRet);

    return 0;
}