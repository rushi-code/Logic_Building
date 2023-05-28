// Write a program which performs addition of two numbers

/*
    Algorithm

    START
        Accept First Number as No1
        Accept Second Number as No2
        Create one variable as ANS
        Perform Addition of No1 and No2
        Store the addition into variable ANS
        Display the value of ANS
    STOP
*/

////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which performs addition of two numbers
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////
///////
//
// Function Name: Additon
// Input: usingned int , unsingned int
// Output: unsigned integer
// Description: performs additon of 2 numbers
// Author: Rushikesh Ingale
// Date: 18/04/23
//
//////////////////////////////////////////////////////////////////
///////

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
    auto unsigned int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;
}

///////////////////////////////////////////////////////////////////
// Entry point function
//////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number\n");
    scanf("%d", &iNo1);

    printf("Enter second number\n");
    scanf("%d", &iNo2);

    iAns = Addition(iNo1, iNo2);

    printf("Additon is %d", iAns);

    return 0;
}