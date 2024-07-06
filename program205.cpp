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
        int Maximum(int iNo1, int iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    Number nobj;
    
    cout<<"Enter First Number\n";
    cin>>iValue1;

    cout<<"Enter Second Number\n";
    cin>>iValue2;

    iRet = nobj.Maximum(iValue1, iValue2);

    cout<<"Maximum number is : "<<iRet<<"\n";
    
    return 0;
}