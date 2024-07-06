/////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept number from user, return addition of digits
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Digit
{
    public:
        int iNo;

        Digit(int X)
        {
            iNo = X;
        }

        int SumDigit()
        {
            int iDigit = 0;
            int iSum = 0;
            int iTemp = iNo;

            while(iTemp!= 0)
            {
                iDigit = iTemp % 10;
                iSum = iSum + iDigit;

                iTemp = iTemp / 10;
            }
            return iSum;
        }
};

int main()
{
    int Number = 0;
    int iRet = 0;

    cout<<"Enter Number\n";
    cin>>Number;

    Digit obj(Number);

    iRet = obj.SumDigit();

    cout<<"Summation of digits is : "<<iRet<<"\n";
    
    return 0;
}