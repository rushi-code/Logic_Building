///////////////////////////////////////////////////////////////////////
//
//  Problem Statement :  Linear Search, Bidirectional Search, Binary Search, check sorted
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
        bool BidirectionalSearch(T);
        bool BinarySearch(T);
        bool CheckSorted();
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
bool ArrayX<T> :: LinearSearch(T No)
{
    bool bflag = false;

    for(int iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            bflag = true;
            break;
        }

    }
    return bflag;
}

template <class T>
bool ArrayX<T> :: BidirectionalSearch(T No)
{
    bool flag = false;
    int iStart = 0;
    int iEnd = iSize-1;

    while(iStart <= iEnd)
    {
        if((Arr[iStart] == No) || (Arr[iEnd] == No))
        {
            flag = true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return flag;
}

template <class T>
bool ArrayX<T> :: BinarySearch(T No)
{
    bool flag = false;
    int iStart = 0, iEnd = 0, iMid = 0;

    iStart = 0;
    iEnd = iSize-1;

    while(iStart<=iEnd)
    {
        iMid = iStart + (iEnd - iStart)/2;
        if((Arr[iMid]==No) || (Arr[iStart] == No) || (Arr[iEnd] == No))
        {
            flag = true;
            break;
        }
        else if(Arr[iMid]<No)
        {
            iStart = iMid + 1;
        }
        else if(Arr[iMid]> No)
        {
            iEnd = iMid - 1;
        }

    }
    return flag;
}

template <class T>
bool ArrayX<T> :: CheckSorted()
{
    int iCnt = 0;
    bool flag = true;

    for(iCnt = 0; iCnt< iSize-1; iCnt++)
    {
        if(Arr[iCnt] <= Arr[iCnt+1])
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    return flag;
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

    bRet = obj->CheckSorted();

    if(bRet == true)
    {
        cout<<"Array is sorted\n";
    }
    else
    {
        cout<<"Array is not sorted\n";
    }

    delete obj;
    
    return 0;
}