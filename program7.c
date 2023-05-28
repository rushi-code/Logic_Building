//Write a program which checks whether number is divsible by 3 and 5.
#include<stdio.h> // for printf and scanf
#include<stdbool.h> // for bool data type

/////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckDivisible
// Input : Integer
// Output : Boolean
// Description : checks whether the input is divisible by 3 and 5
// Author : Rushikesh Machindra Ingale
// Date : 25/04/2023
// Update : 26/04/2023
//
////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
   if(((iNo % 3) == 0) &&((iNo % 5) ==0))
   {
    return true;
   }
   else
   {
    return false;
   }
}

///////////////////////////////////////////////////////////////////////////
//Entry Point Function
/////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;     //variable to accept input
    bool bRet = false;  //variable to accept return value

    printf("Please enter number to check whether it is divisible by 3 or 5 :\n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue); //Function call

    if(bRet ==true)
    {
        printf("%d is Divsible by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not completely divsible by  3 and 5 \n",iValue);
    }


    return 0;
}

