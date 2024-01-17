#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize)
{
    int i=0;
    T maxNo=arr[0];

    for(i=0;i<iSize;i++)
    {
            if(arr[i]>maxNo)
            {
                maxNo=arr[i];
            }
    }
    return maxNo;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={1.0,3.7,9.8,8,7};

    int iRet=Max(arr,5);
    printf("%d\n",iRet); 

    float fRet=Max(brr,4);
    printf("%f",fRet);

    return 0;
}

