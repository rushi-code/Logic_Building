/////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept n numbers, return addition of n numbers
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

        int Addition()
        {
            int iSum = 0;
            int iCnt = 0;

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                iSum =  iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter no of elements\n";
    cin>>iNo;

    Array obj(iNo);

    obj.Accept();
    obj.Display();

    iRet = obj.Addition();
    cout<<"Addition is "<<iRet<<"\n";

    return 0;
}