//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: 
//  i/p : 6785
//  o/p :  5    8   7   6
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int iNo)
{
    if(iNo != 0)
    {
        printf("%d\t",iNo % 10);
        iNo = iNo/10;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    printf("\nEnd Of Main\n");
    
    return 0;
}