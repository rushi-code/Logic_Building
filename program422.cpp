///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Swap Two Numbers
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Swap(int &No1, int &No2)   //Call By Reference
{
    int Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;
}

void Swap(double &No1, double &No2)   //Call By Reference
{
    double Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;
}

int main()
{
    int A = 10, B = 11;
    Swap(A,B);

    cout<<"Data After Swapping : "<<"\n";
    cout<<"Value of A : "<<A<<"\n";
    cout<<"Value of B : "<<B<<"\n";

    double X = 10.89, Y = 11.67;
    Swap(X,Y);

    cout<<"Data After Swapping : "<<"\n";
    cout<<"Value of A : "<<X<<"\n";
    cout<<"Value of B : "<<Y<<"\n";

    return 0;
}
