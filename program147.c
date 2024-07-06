//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Non Linear Pattern
/*
    Input : 

    Row : 4
    Col : 4

    Output : 
    *   *   *   *
        *   *   *
            *   *
                * 
*/ 
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if(iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }

    for(i = iRow; i>=1; i--)    
    {
        for(j = iCol; j >= 1; j--) 
        {
            if(i >= j)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
            
        }

        printf("\n"); 
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter Number of columns : \n");
    scanf("%d",&iValue2);
    
    Display(iValue1, iValue2);

    return 0;
}