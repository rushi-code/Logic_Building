///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept one number and off the 7th bit of that number and return new number (without checking)
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0XFFFFFFBF;
   
    return (iNo & iMask);
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
