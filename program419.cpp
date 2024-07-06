///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Addition of two numbers (Generic Function)
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int A = 10, B = 11, Ret = 0;
    Ret = Addition(A, B);
    cout<<"Addition is "<<Ret<<"\n";

    double X = 90.7, Y = 85.4, Result = 0.00;
    Result = Addition(X,Y);
    cout<<"Addition is "<<Result<<"\n";

    float L = 90.7f, M = 78.9f, ResultF = 0.0f;
    ResultF = Addition(L,M);
    cout<<"Addition is "<<ResultF<<"\n";

    return 0;
}
