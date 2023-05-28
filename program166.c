// count whitespaces in given string
#include<stdio.h>

int CountSpace(char *str)
{
   int iCount = 0;
   while(*str !='\0')
   {
      if(*str==' ')
      {
         iCount++;
      }
      str++;
   }
   return iCount;
}

int main()
{
   char Arr[10];
   int iRet  = 0;

   printf("Enter sting :\n");
   scanf("%[^'\n']s",Arr);
   
   
   iRet = CountSpace(Arr);

   printf("total whitespaces are %d\n",iRet);



   return 0;
}