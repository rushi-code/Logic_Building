///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept one number from user and check 7th, 14th and 21th bit is on or off
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00102040;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter Number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"7th,14th,21th bit are ON\n";
    }
    else
    {
        cout<<"7th, 14th, 21th bit are OFF\n";
    }

    return 0;
}
