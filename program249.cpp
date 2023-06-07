//Accept number from user and off 7th bit and return number (without checking)
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
  UINT iMask = 0XFFFFFFBF;

  UINT iResult = 0;

  iResult = iNo & iMask;

  return iResult;
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

