#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int No1;
        int No2;

        Arithmatic(int A,int B);
        int Addition();
        int Substraction();
};

/*
    Return_value class_name :: Function_name(Parameters)
    {
        body
    }
*/
Arithmatic::Arithmatic(int A,int B)
{
    this->No1=A;
    this->No2=B;    
}

int Arithmatic::Addition()
{
    int Ans=0;
    Ans=No1+No2;
    return Ans;
}

int Arithmatic::Substraction()
{
    int Ans=0;
    Ans=No1-No2;
    return Ans;
}

int main()
{
    Arithmatic obj1(11,10);
    int Ret=0;

    Ret=obj1.Addition();
    cout<<"Addition is:"<<Ret<<"\n";

    Ret=obj1.Substraction();
    cout<<"Subtraction is:"<<Ret<<"\n";
    
    return 0;
}