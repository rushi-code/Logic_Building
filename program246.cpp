//Accept number from user and toggle 7th bit and return number
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
  UINT iMask = 0X00000040;
  
  return (iNo ^iMask);
  
}

int main()
{
  UINT iValue = 0;
  UINT iRet = 0;
  cout<<"Enter Number\n";
  cin>>iValue;


  iRet = ToggleBit(iValue);
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