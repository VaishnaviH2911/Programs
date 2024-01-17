#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    int i=0;
    T minNo=arr[0];

    for(i=0;i<iSize;i++)
    {
            if(arr[i]<minNo)
            {
                minNo=arr[i];
            }
    }
    return minNo;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.8,8,7};

    int iRet=Min(arr,5);
    printf("%d\n",iRet); 

    float fRet=Min(brr,4);
    printf("%f",fRet);

    return 0;
}

