///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Swap Two Numbers
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Swap(int *No1, int *No2)   //Call By Address
{
    int Temp;
    Temp = *No1;
    *No1 = *No2;
    *No2 = Temp;
}

int main()
{
    int A = 10, B = 11;
    Swap(&A,&B);

    cout<<"Data After Swapping : "<<"\n";
    cout<<"Value of A : "<<A<<"\n";
    cout<<"Value of B : "<<B<<"\n";
    
    return 0;
}
