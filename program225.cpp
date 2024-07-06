//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Accept Decimal number convert it into binary
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
    int iDigit = 0;

    cout<<"Binary Conversion of "<<iNo<<" is \n";

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        cout<<iDigit;
        iNo = iNo/2;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number\n";
    cin>>iValue;

    DisplayBinary(iValue);
    
    return 0;
}