//Accept number from user and check 4th and 9th bit is on or off(typedef)
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
  UINT iMask = 0X00000108;

  UINT iResult = 0;

  iResult = iNo & iMask;

  if(iResult ==  iMask)
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
  cout<<"Enter Number\n";

  cin>>iValue;

  bRet = CheckBit(iValue);

  if(bRet == true)
  {
    cout<<"4th and 9th bits is ON\n";
  }
  else
  {
    cout<<"4th and 9th bits is OFF\n";
  }
  return 0;
}


/*
NO 15
Binary: 00001101
*/