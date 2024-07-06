/////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept two numbers and return maximum number (using OOP)
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Number
{
    public:
        int iNo1;
        int iNo2;

        void Accept()
        {
            cout<<"Enter First Number\n";
            cin>>iNo1;

            cout<<"Enter Second Number\n";
            cin>>iNo2;
        }

        int Maximum()
        {
            if(iNo1 > iNo2)
            {
                return iNo1;
            }
            else
            {
                return iNo2;
            }
        }
};

int main()
{
    int iRet = 0;

    Number nobj;
    
    nobj.Accept();
    
    iRet = nobj.Maximum();

    cout<<"Maximum number is : "<<iRet<<"\n";
    
    return 0;
}