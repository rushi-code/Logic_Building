// count occurence of character given by user
#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char cValue)
{
   int iCount = 0;
   while(*str !='\0')
   {
      if(*str==cValue)
      {
         iCount++;
      }
      str++;
   }
   return iCount;
}

int main()
{
   char Arr[20];
   char ch ='\0';
   int iRet  = 0;

   printf("Enter sting :\n");
   scanf("%[^'\n']s",Arr);
   
   fflush(stdin);
   printf("Enter character\n");
   scanf("%c",&ch);
   
  
   iRet = CountChar(Arr,ch);

   printf("Number of occurances are %d\n",iRet);



   return 0;
}