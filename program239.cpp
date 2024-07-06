///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept one number from user and check 4th and 9th bit is on or off
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X108;
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
        cout<<"4th and 9th bits are ON"<<"\n";
    }
    else
    {
        cout<<"4th and 9th bits are OFF"<<"\n";
    }

    return 0;
}
