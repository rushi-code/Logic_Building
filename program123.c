//Non Linear pattern printing
/*
    Input :
    Row:4
    Col:4

    Output:
   1  &  3  &
   1  &  3  &
   1  &  3  &
   1  &  3  &

*/


#include<stdio.h>

void Display(int iRow, int iColumn)
{
   int iCnt = 0;
   int i = 0;
   int j = 0;
  
   for(i = 1; i<=iRow; i++)
   {
    for(j =1; j<=iColumn; j++)
    {
       if(j%2==0)
       {
        printf("&\t");
       }
       else
       {
        printf("%d\t",j);

       }

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
