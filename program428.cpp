///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Addition of all elements of array (Generic)
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Addition(T Arr[], int Size)
{
    int iCnt = 0;
    T Sum = 0;

    for(iCnt = 0; iCnt<Size; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int A[] = {10,20,30,40,50};
    int iRet = 0;
    iRet = Addition(A,5);
    cout<<"Addition is : "<<iRet<<"\n";

    double B[] = {10.10,20.20,30.30,40.40,50.50};
    double dRet = 0.0;
    dRet = Addition(B,5);
    cout<<"Addition is : "<<dRet<<"\n";
    
    return 0;
}
