//Accept number and position of bit from user check  bit is on or off
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
  UINT iMask = 0X00000001;

  UINT iResult = 0;

  if((iPos<1)||(iPos>32))
  {
    cout<<"Invalid position\n";
    return false;
  }

  iMask = iMask<<(iPos - 1);


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
  UINT iBit = 0;
  bool bRet = false;
  cout<<"Enter Number\n";
  cin>>iValue;

  cout<<"Enter bit position (range should be 1 to 32)\n";
  cin>>iBit;

  

  bRet = CheckBit(iValue,iBit);

  if(bRet == true)
  {
    cout<<"bit is ON\n";
  }
  else
  {
    cout<<"bit is OFF\n";
  }
  return 0;
}


/*
NO 15
Binary: 00001101
*/