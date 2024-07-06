///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept n numbers and display it
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();

        void Accpet();
        void Display();
};

ArrayX :: ArrayX(int iNo)
{
    this->iSize = iNo;
    this->Arr = new int[iSize];
}

ArrayX :: ~ArrayX()
{
    delete [] Arr;
}

void ArrayX :: Accpet()
{
    cout<<"Enter Elements of Array\n";

    for(int iCnt = 0; iCnt<iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}
void ArrayX :: Display()
{
    cout<<"Elements of array are : \n";
    for(int iCnt = 0; iCnt<iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";

}

int main()
{
    int iValue = 0;
    
    cout<<"Enter Size of Array: \n";
    cin>>iValue;

    ArrayX obj(iValue);

    obj.Accpet();
    obj.Display();
    
    return 0;
}