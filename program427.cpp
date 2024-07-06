///////////////////////////////////////////////////////////////////////
//
//  Problem Statement :  Display Array (Generic)
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
void Display(T Arr[], int Size)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int A[] = {10,20,30,40,50};
    Display(A,5);

    double B[] = {10.10,20.20,30.30,40.40,50.50};
    Display(B,5);

    return 0;
}
