//Write a program which accpet the marks and dispaly class accordingly

// 0 to 34  fail
// 35 to 49 pass
// 50 to 59 second
// 60 to 74 first
//75 to 100 first class with distinction
#include<stdio.h> // for printf and scanf


void DisplayClass(float fMarks) 
{
    if((fMarks<0.0f) || (fMarks>100.00f))  //filter
    {
        printf("Invalid input\n");
        printf("Plz enter marks between range 0 to 100");
        return;

    }
    if((fMarks>=0.00f) && (fMarks<35.00f))
    {
        printf("Your are fail\n");
    }
    else if((fMarks>=35.00f)&&(fMarks<50.00f))
    {
        printf("You got pass class\n");
    }
    else if((fMarks>=50.00f)&&(fMarks<60.00f))
    {
        printf("You got second class\n");
    }
    else if((fMarks>=60.00f)&&(fMarks<75.00f))
    {
        printf("You got first class\n");

    }

    else if((fMarks>=75.00f)&&(fMarks<=100.00f))
    {
        printf("You got first class distinction\n");
    }
}


///////////////////////////////////////////////////////////////////////////Entry Point Function
/////////////////////////////////////////////////////////////////////////


int main()
{
   float fValue = 0.0f;
   printf("Plz enter your percentage :\n");
   scanf("%f",&fValue);

   DisplayClass(fValue);

    return 0;
}

