#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int size;
    public:
        Array(int value=10)
        {
            cout<<"Inside constructor\n";

            this->size=value;
            this->Arr=new int[size];
        }

        Array(Array &ref)
        {
            cout<<"Inside copy constructor\n";

            this->size=ref.size;
            this->Arr=new int[this->size];

            for(int i=0;i<size;i++)
            {
                this->Arr[i]=ref.Arr[i];
            }
        }

        ~Array()
        {
            cout<<"Inside destructor\n";

            delete []Arr;
        }

        inline void Accept();
        inline void Display();
};

void Array::Accept()
{
    cout<<"Please enter the values:\n";

    for(int i=0;i<this->size;i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements are:\n";

    for(int i=0;i<this->size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

class ArrSearch:public Array
{
    public:
        ArrSearch(int no=10):Array(no){}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch::SearchFirst(int value)
{
    int i=0;

    for(i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            break;
        }
    }
    if(i==size)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}

int ArrSearch::Frequency(int value)
{
    int iCnt=0;

    for(int i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch::SearchLast(int value)
{
    int i=0;
    int temp=0;
    int iCnt=0;

    for(i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            temp=iCnt;
        }
        iCnt++;
    }
    if(i==size)
    {
        return temp+1;
    }
    else
    {
        return -1;
    }
}

int ArrSearch::EvenCount()
{
    int iCnt=0, i=0;

    for(i=0;i<size;i++)
    {
        if(Arr[i]%2==0)
        {
            iCnt++;
        }
    }
    if(i==size)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
    
}

int ArrSearch::OddCount()
{
    int iCnt=0, i=0;

    for(i=0;i<size;i++)
    {
        if(Arr[i]%2!=0)
        {
            iCnt++;
        }
    }
    if(i==size)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
    
}

int ArrSearch::SumAll()
{
    int i=0, iSum=0;

    for(i=0;i<size;i++)
    {
        iSum=iSum+Arr[i];
    }
    if(i==size)
    {
        return iSum;
    }
    else
    {
        return -1;
    }
}

int main()
{
    cout<<"Inside main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iret=0;

    iret=sobj1.Frequency(11);
    cout<<"Frequency is:"<<iret<<"\n";

    iret=sobj1.SearchFirst(11);
    cout<<"First Occurance is:"<<iret<<"\n";

    iret=sobj1.SearchLast(11);
    cout<<"Last Occurance is:"<<iret<<"\n";

    iret=sobj1.EvenCount();
    cout<<"Number of even elements are:"<<iret<<"\n";

    iret=sobj1.OddCount();
    cout<<"Number of odd elements are:"<<iret<<"\n";

    iret=sobj1.SumAll();
    cout<<"Sum of all is:"<<iret<<"\n";

    return 0;
}