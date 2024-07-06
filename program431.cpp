///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept n numbers and display it.
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int Size;

        ArrayX(int);

        void Accept();
        
        void Display();
        
};

ArrayX :: ArrayX(int Length)
{
    Size = Length;
    Arr = new int[Size];
}

void ArrayX :: Accept()
{
    cout<<"Enter Elements of Array\n";
    int iCnt = 0;

    for(iCnt = 0; iCnt<Size; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX :: Display()
{
    cout<<"Elements of Array are\n";
    int iCnt = 0;

    for(iCnt = 0; iCnt<Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    ArrayX obj(5);

    obj.Accept();
    obj.Display();

    return 0;
}