//Non Linear pattern printing
/*
   Input :
   Row:6
   Col:6

   Output:
   *  $  $  $  $  $
   $  *           $
   $     *        $ 
   $        *     $
   $           *  $
   $  $  $  $  $  *
*/


#include<stdio.h>

void Display(int iRow, int iColumn)
{
   int iCnt = 0;
   int i = 0;
   int j = 0;
   
   if(iRow != iColumn)
   {
      printf("Invalid Input\n");
      return;
   }
   
   for(i = 1; i<=iRow; i++)
   {
    for(j =1; j<=iColumn; j++)
    {
       if(i==j)

       {
        printf("*\t");

       }
       else if((i == 1) || (i==iRow) ||  (j ==1) || (j == iColumn))
       {
        printf("$\t");
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
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter Number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    
    return 0;
}
