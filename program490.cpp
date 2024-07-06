///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : InsertionSort
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();

        void Accpet();
        void Display();

        void InsertionSort();
};

template <class T>
ArrayX<T> :: ArrayX(int iNo)
{
    this->iSize = iNo;
    this->Arr = new T[iSize];
}

template <class T>
ArrayX<T> :: ~ArrayX()
{
    delete [] Arr;
}

template <class T>
void ArrayX<T> :: Accpet()
{
    cout<<"Enter Elements of Array\n";

    for(int iCnt = 0; iCnt<iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void ArrayX<T> :: Display()
{
    cout<<"Elements of array are : \n";
    for(int iCnt = 0; iCnt<iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";

}

template <class T>
void ArrayX<T> :: InsertionSort()
{
    T selected;
    int i = 0;
    int j = 0;

    for(i = 1; i<iSize; i++)
    {
        for(j = i-1, selected = Arr[i]; ((j>=0)&& (Arr[j]>selected)) ; j--)
        {
            Arr[j+1] = Arr[j];
        }
        Arr[j+1] = selected;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter Size of Array: \n";
    cin>>iValue;

    ArrayX<int> * obj = new ArrayX<int>(iValue);

    obj->Accpet();
    obj->Display();

    obj->InsertionSort();

    cout<<"Data After Sorting is : \n";

    obj->Display();

    delete obj;
    
    return 0;
}