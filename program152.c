// To Display ASCII Table

#include<stdio.h>

int main()
{
   int iCnt = 0;
   printf("ASCII table\n");
   for(iCnt = 0; iCnt<=127; iCnt++)
   {
      printf("%c\t%d\n",iCnt,iCnt);
   }
   return 0;
}