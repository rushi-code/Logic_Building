//Accept number from user and check 3rd bit is on or off(unsigned)
#include<iostream>
using namespace std;

bool CheckBit(unsigned int iNo)
{
  unsigned int iMask = 4;

  unsigned int iResult = 0;

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
  unsigned int iValue = 0;
  bool bRet = false;
  cout<<"Enter Number\n";

  cin>>iValue;

  bRet = CheckBit(iValue);

  if(bRet == true)
  {
    cout<<"3rd bit is ON\n";
  }
  else
  {
    cout<<"3rd bit is OFF\n";
  }
  return 0;
}


/*
NO 15
Binary: 00001101
*/