#include<iostream>
using namespace std;

int main()
{
    int Size=0;
    int *ptr=NULL;

    cout<<"Enter number of elements:"<<"\n";
    cin>>Size;

    ptr=new int[Size];

    cout<<"Enter the elements:"<<"\n";
    for(int iCnt=0;iCnt<Size;iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of the array are:\n";

    for(int iCnt=0;iCnt<Size;iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }
    cout<<"\n";
    
    delete []ptr;
    
    return 0;
}