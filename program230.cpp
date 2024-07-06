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
    char Arr[] = {'A','B','C','D','E','F'};

    cout<<"Hexadecimal conversion of "<<iNo<<" is : \n";

    while(iNo != 0)
    {
        iDigit = iNo % 16;

        if(iDigit<=9)
        {
            cout<<iDigit;
        }
        else
        {
           cout<<Arr[iDigit-10];
        }
        
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