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
            cout<<"Inside constructor"<<"\n";
            iSize = iNo;
            Arr = new int [iSize];  //Heap(Freestore)
        }

        ~Array()
        {
            cout<<"Inside destructor"<<"\n";
            delete[]Arr;
        }


        void Accept()
        {
            cout<<"Inside Accept method"<<"\n";
            cout<<"Enter the elements : "<<"\n";

            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }

        }

        void Display()
        {
            cout<<"Inside display method"<<"\n";
            cout<<"Elements of array are : "<<"\n";

            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
            
        }

        int Addition()
        {
            cout<<"Inside summation"<<"\n";
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
    cout<<"Inside constructor"<<"\n";
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter no of elements\n";
    cin>>iNo;

    Array obj(iNo);

    obj.Accept();
    obj.Display();

    iRet = obj.Addition();
    cout<<"Addition is "<<iRet<<"\n";

    //destructor calling
    return 0;
}