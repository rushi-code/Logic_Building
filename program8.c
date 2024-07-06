///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Write a program which accepts the marks and 
//                      display the class accordingly
//  0 to 34         Fail
//  35 to 49        Pass Class
//  50 to 59        Second Class
//  60 to 74        First Class
//  75 to 100       First Class with Distinction
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks<0.00f) || (fMarks>100.00f))  // updater
    {
        printf("Invalid Input\n");
        printf("Please enter marks in between the range 0 to 100\n");
        return;
    }

    if((fMarks>= 0.0f) && (fMarks<35.00f))
    {
        printf("You are fail\n");
    }

    else if((fMarks>= 35.00f) && (fMarks<50.00f))
    {
        printf("You are pass class\n");
    }

    else if((fMarks>= 50.00f) && (fMarks<60.00f))
    {
        printf("You are second class\n");
    }

    else if((fMarks>= 60.00f) && (fMarks<75.00f))
    {
        printf("You are first class\n");
    }

    else if((fMarks>= 75.00f) && (fMarks<=100.00f))
    {
        printf("You are first class with distinction\n");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Please enter your percentage: \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}