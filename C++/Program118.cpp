#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
        int iSize;
    public:
        String()
        {
            iSize=20;
            str=new char[iSize];
            
        }
        String(int X)
        {
            iSize=X;
            str= new char[iSize];
        }
        ~String()
        {
            delete []str;
        }
        void Accept()
        {
            cout<<"Enter the String:"<<endl;
            //gets(str);
            cin.getline(str,iSize);
        }
        void Display()
        {
            cout<<"String is:"<<str<<endl;
        }
        int CountCapital()
        {
            int iCnt=0;
            

            while(*str!='\0')
            {
                if(*str>='A' && *str<='Z')
                {
                    iCnt++;
                }
                str++;
            }
            return iCnt;
        }
};

int main()
{
    String *sobj= new String(30);
    int iRet=0;

    sobj->Accept();
    sobj->Display();

    iRet=sobj->CountCapital();

    cout<<"Capital count is:"<<iRet<<endl;

    //delete sobj;

    return 0;
}