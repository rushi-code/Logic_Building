/////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept n numbers template
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Array
{
    public:

        int iSize;
        int *Arr;

        Array(int iNo)
        {
            iSize = iNo;
            Arr = new int [iSize];  //Heap(Freestore)
        }

        ~Array()
        {
            delete[]Arr;
        }


        void Accept()
        {
            cout<<"Enter the elements : "<<"\n";

            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }

        }

        void Display()
        {
            cout<<"Elements of array are : "<<"\n";

            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
            
        }
};

int main()
{
    int iNo = 0;

    cout<<"Enter no of elements\n";
    cin>>iNo;

    Array obj(iNo);

    obj.Accept();
    obj.Display();

    return 0;
}