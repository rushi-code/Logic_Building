//count capital lettters in given string

#include<stdio.h>

int strlenCap(char *str)
{
   int iCount = 0;
   while(*str !='\0')
   {
      if((*str>='A')&&(*str<='Z'))
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
   
   iRet = strlenCap(Arr);

   printf("total capital letters are %d\n",iRet);

   return 0;
}