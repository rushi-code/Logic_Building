///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept one number and off the 7th bit of that number and return new number
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return (iNo ^ iMask);
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter Number : \n";
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";

   
    return 0;
}
