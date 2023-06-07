//Accept number from user and position of bit, turn off that bit and return number
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
  UINT iMask = 0X00000001;
  UINT iResult = 0;

  iMask = iMask<<(iPos-1);

  iResult = iNo & iMask;
  
  if(iResult ==iMask)
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
  UINT iBit = 0;
  UINT iRet = 0;
  cout<<"Enter Number\n";
  cin>>iValue;

  cout<<"Enter Position\n";
  cin>>iBit;

  iRet = OffBit(iValue,iBit);
  cout<<"Result is : "<<iRet<<"\n";

  return 0;

}


/*
ipos = 7
  0 1 1 1 0 1 0 0
  0 1 0 0 0 0 0 0     ^XOR
  --------------------
  0 0 1 1 0 1 0 0
*/