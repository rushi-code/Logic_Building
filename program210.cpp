/////////////////////////////////////////////////////////////////////
//
//  Problem Statement : 
/*
    iRow = 4
    iCol = 4

    *   *   *   *   
    *   *   *   *   
    *   *   *   *   
    *   *   *   *   

*/
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
            cout<<"*\t";
        }
        cout<<"\n";
    }
}

int main()
{
    int i = 0;
    int j = 0;

    cout<<"Enter Rows\n";
    cin>>i;

    cout<<"Enter Columns\n";
    cin>>j;

    Display(i,j);
    
    return 0;
}