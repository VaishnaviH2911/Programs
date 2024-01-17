#include<iostream>
using namespace std;

template <class T>

T Addition(T Arr[], int Length)
{
    T Sum=0; 
    int iCnt=0;

    for(iCnt=0;iCnt<Length;iCnt++)
    {
        Sum=Sum+Arr[iCnt];
    }
    return Sum;
}
int main()
{
    int Size=0, iCnt=0; 
    float Ret=0.0f;
    float *ptr=NULL;

    cout<<"Enter number of elements:"<<"\n";
    cin>>Size;

    ptr=new float[Size];

    cout<<"Enter the elements:"<<"\n";
    for(int iCnt=0;iCnt<Size;iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Ret=Addition(ptr,Size);
    cout<<"Addition of all elements is:"<<Ret<<"\n";

    cout<<"Elements of the array are:\n";

    for(int iCnt=0;iCnt<Size;iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }
    cout<<"\n";
    
    delete []ptr;
    
    return 0;
}