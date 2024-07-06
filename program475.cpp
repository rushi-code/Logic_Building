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
    cout<<"Inside constructor to allocate memory\n";
    this->iSize = iNo;
    this->Arr = new int[iSize];
}

ArrayX :: ~ArrayX()
{
    cout<<"Inside destructor to deallocate memory\n";
    delete [] Arr;
}

void ArrayX :: Accpet()
{
    cout<<"Inside Accept method\n";
    cout<<"Enter Elements of Array\n";

    for(int iCnt = 0; iCnt<iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}
void ArrayX :: Display()
{
    cout<<"Inside Display method\n";
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

    cout<<"Inside main\n";
    
    cout<<"Enter Size of Array: \n";
    cin>>iValue;

    ArrayX obj(iValue);

    obj.Accpet();
    obj.Display();

    cout<<"End of main\n";
    
    return 0;
}