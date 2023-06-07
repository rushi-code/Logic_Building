//Accept number from user and off 7th bit and return number
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
  UINT iMask = 0X40;
  UINT iResult = 0;

  iResult = iNo & iMask;

  if(iResult == iMask)
  {
    return (iNo^iMask);
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
  cout<<"Enter Number\n";
  cin>>iValue;


  iRet = OffBit(iValue);
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