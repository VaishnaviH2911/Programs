#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr,T iSize, int iNo)
{
    int iCnt=-1;
    for(int i=0;i<iSize;i++)
    {
        if(arr[i]==iNo)
        {
            iCnt=i;
        }
    }
    return iCnt+1;
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=SearchLast(arr,9,40);
    printf("%d",iRet);
    return 0;
}


