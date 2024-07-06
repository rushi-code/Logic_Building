///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Decimal to hex convertor     
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void DisplayHexademical(int iNo)
{
    int iDigit = 0;

    cout<<"Hexadecimal conversion of "<<iNo<<" is : \n";

    while(iNo != 0)
    {
        iDigit = iNo % 16;
        cout<<iDigit;
        iNo = iNo/16;
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number\n";
    cin>>iValue;

    DisplayHexademical(iValue);

    return 0;
}