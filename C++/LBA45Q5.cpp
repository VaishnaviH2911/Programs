#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr,T iSize)
{
    for(int i=0;i<iSize;i++)
    {
        T start=0;
        T end= iSize-1;

        while(start<end)
        {
            T temp;
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;

            start++;
            end--;
        }
    }
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};

    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    Reverse(arr,9);

    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    return 0;
}


