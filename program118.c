//Non Linear pattern printing
/*
    Input :
    Row:3
    Col:5

    Output:
    a    b    c   d   e
    a    b    c   d   e
    a    b    c   d   e
*/
//without multiple loop condtions
  

#include<stdio.h>

void Display(int iRow, int iColumn)
{
   int iCnt = 0;
   int i = 0;
   int j = 0;
   char ch = '\0';

   for(i = 1; i<=iRow; i++)
   {
    for(j =1,ch='a'; j<=iColumn; j++,ch++)
    {
        printf("%c\t",ch);
    }
    
    printf("\n");
   }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter Number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    
    return 0;
}
