// count digits in given string
#include<stdio.h>

int strlenDigit(char *str)
{
   int iCount = 0;
   while(*str !='\0')
   {
      if((*str>='0')&&(*str<='9'))
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
   
   
   iRet = strlenDigit(Arr);

   printf("total digits are %d\n",iRet);



   return 0;
}