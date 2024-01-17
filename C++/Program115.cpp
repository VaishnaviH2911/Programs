#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr; 
        int iSize;

    public:
        Array(int X) //parameterised constructor
        {
            iSize=X;
            Arr= new int[iSize];
        }
        ~Array() //Destructor
        {
            delete []Arr;
        }
        void Accept() //Member function
        {
            int iCnt=0;
            cout<<"Please enter the elements:"<<endl;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display() //Member function
        {
            cout<<"Elements of the array are: "<<endl;
            int iCnt=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
        int AdditionEven()
        {
            int iSum=0;
            int iCnt=0;

            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                if((Arr[iCnt]%2)==0)
                {
                    iSum=iSum+Arr[iCnt];
                }
            }
            return iSum;
        }
};

int main()
{
    int iLength=0;
    int iRet=0;

    cout<<"Enter the number of elements that you want to store"<<endl;
    cin>>iLength;

    Array *aobj=new Array(iLength);

    aobj->Accept();
    aobj->Display();
    
    iRet=aobj->AdditionEven();

    cout<<"Addition of even elements is:"<<iRet<<endl;
    

    delete aobj;

    return 0;
}