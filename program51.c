///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Separates digits from number
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;

        printf("%d\n",iDigit);

        iNo = iNo/10;   //Self Updating Statement
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);   //Call by value (7854)
    
    return 0; 
}

// Input  :    7854
// Output :     4
//              5
//              8
//              7
