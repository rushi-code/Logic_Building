///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Maximum element from array (Generic)
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Maximum(T Arr[], int Size)
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 0; iCnt<Size; iCnt++)
    {
        if(Arr[iCnt]> Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

int main()
{
    int A[] = {10,20,30,40,50};
    int iRet = 0;
    iRet = Maximum(A,5);
    cout<<"Maximum Number is  : "<<iRet<<"\n";

    double B[] = {10.10,20.20,30.30,40.40,50.50};
    double dRet = 0.0;
    dRet = Maximum(B,5);
    cout<<"Maximum Number is  : "<<dRet<<"\n";
    
    return 0;
}
