/////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept number from user, perform operation on digit(template)
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Digit
{
    private:
        int iNo;

    public:
    
        Digit(int X)
        {
            iNo = X;
        }
};

int main()
{
    int Number = 0;

    cout<<"Enter Number\n";
    cin>>Number;

    Digit obj(Number);
    
    return 0;
}