#include<iostream>
using namespace std;

template <class T>

T Maximum(T Arr[], int Size)
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 0; iCnt<Size; iCnt++)
    {
        if(Arr[iCnt]>Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}


int main()
{
    int A[] = {10,20,30,40,50};
    int Ret = 0;
    Ret = Maximum(A,5);
    cout<<"Maximum number is : "<<Ret<<"\n";
    
    double B[] = {10.85,20.2,30.4,40.36,50.369};
    double dRet = 0.0;
    dRet = Maximum(B,5);
    cout<<"Addition is : "<<dRet<<"\n";
    
    return 0;
}