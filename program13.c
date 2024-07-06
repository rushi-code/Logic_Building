///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Display Jay Ganesh using Filter
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)   //Filter
    {
        printf("Please enter positive number\n");
        return;
    }

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d. Jay Ganesh...\n",iCnt); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter How Many Times You Want To Display\n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}