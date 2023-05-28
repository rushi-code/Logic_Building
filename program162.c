// count small lettters in given string
#include<stdio.h>

int strlenSmall(char *str)
{
   int iCount = 0;
   while(*str !='\0')
   {
      if((*str>='a')&&(*str<='z'))
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
   
   
   iRet = strlenSmall(Arr);

   printf("total small letters are %d\n",iRet);



   return 0;
}