//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: 
//  i/p : 6785
//  o/p :  5    8   7   6
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayI(int iNo)
{
    while(iNo != 0)
    {
        printf("%d\t",iNo % 10);
        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayI(iValue);

    printf("\nEnd Of Main\n");
    
    return 0;
}