// count vowels in given string
#include<stdio.h>

int CountVowels(char *str)
{
   int iCount = 0;
   while(*str !='\0')
   {
      if((*str=='a')||(*str=='A')||(*str=='e')||(*str=='E')||(*str=='i')||(*str=='I')||(*str=='o')||(*str=='O')||(*str=='u')||(*str=='U'))
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
   
   
   iRet = CountVowels(Arr);

   printf("total vowels are %d\n",iRet);



   return 0;
}