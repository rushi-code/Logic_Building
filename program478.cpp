///////////////////////////////////////////////////////////////////////
//
//  Problem Statement :  Linear Search
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

        bool LinearSearch(T);
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
bool ArrayX<T> :: LinearSearch(T no)
{
    bool bflag = false;

    for(int iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == no)
        {
            bflag = true;
            break;
        }

    }
    return bflag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter Size of Array: \n";
    cin>>iValue;

    ArrayX<int> * obj = new ArrayX<int>(iValue);

    obj->Accpet();
    obj->Display();

    cout<<"Enter the element that you want to search\n";
    cin>>iValue;

    bRet = obj->LinearSearch(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is present in the array\n";
    }
    else
    {
        cout<<iValue<<" is not present in the array\n";
    }

    delete obj;
    
    return 0;
}