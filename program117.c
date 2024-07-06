//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Non Linear Pattern
/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    a   a   a   a   a
    b   b   b   b   b
    c   c   c   c   c   
*/ 
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'a';

    for(i = 1; i<=iRow; i++)    //Outer 
    {
        for(j = 1; j<=iCol; j++)    //Inner
        {
            printf("%c\t",ch);
        }
        ch++;
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