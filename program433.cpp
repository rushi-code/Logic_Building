///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept n numbers and display it (Generic)
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int Size;

        ArrayX(int);

        void Accept();
        
        void Display();
        
};

template<class T>
ArrayX<T> :: ArrayX(int Length)
{
    Size = Length;
    Arr = new T[Size];
}

template<class T>
void ArrayX<T> :: Accept()
{
    cout<<"Enter Elements of Array\n";
    int iCnt = 0;

    for(iCnt = 0; iCnt<Size; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template<class T>
void ArrayX<T> :: Display()
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
    ArrayX<int> obj1(5);
    obj1.Accept();
    obj1.Display();

    ArrayX<double> obj2(5);
    obj2.Accept();
    obj2.Display();

    return 0;
}