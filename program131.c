//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Non Linear Pattern
/*
    Input : 

    Row : 6
    Col : 6

    Output : 
    *   *   *   *   *   *
    
    *   *               *
    
    *       *           *
    
    *           *       *
    
    *               *   *
    
    *   *   *   *   *   *
*/ 
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i<=iRow; i++)    //Outer 
    {
        for(j = 1; j <= iCol; j++)    //Inner
        {
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n"); 
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