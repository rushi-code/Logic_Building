//taking no from user (decimal) convert it into binary
#include<iostream>
using namespace std;

void Displaybinary(int iNo)
{
  int iDigit = 0;
  cout<<"Binary conversion of: "<<iNo<<" is "<<"\n";
  while(iNo!=0)
  {
    iDigit = iNo%2;
    cout<<iDigit;
    iNo = iNo/2;
  }
}

int main()
{
  int iValue = 0;

  cout<<"Enter Number\n";

  cin>>iValue;

  Displaybinary(iValue);

  return 0;
}