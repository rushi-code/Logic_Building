// Check whether character is small or not (without ASCII)
#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
   if((cValue>='a')&&(cValue<='z'))
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main()
{
   char ch ='\0';
   bool bRet = false;
   printf("Enter Character:\n");
   scanf("%c",&ch);

   bRet = CheckSmall(ch);

   if (bRet==true)
   {
      printf("%c is small letter\n",ch);
   }
   else
   {
      printf("%c is not small letter\n",ch);
   }
 


   return 0;
}