#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr, int iSize)
{
   T iSum=0;
   int i=0;
   for(i=0;i<iSize;i++)
   {
        iSum=iSum+arr[i];
   }
   return iSum;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.8,8,7};

    int iSum=AddN(arr,5);
    printf("%d\n",iSum);

    float fSum=AddN(brr,4);
    printf("%f",fSum);

    return 0;
}

