// last position of character given by user
#include<stdio.h>
#define ERR_NOTFOUND -1
int LastOcc(char *str, char cValue)
{
   int iCnt = 1;
   int iPos = ERR_NOTFOUND;

   while(*str !='\0')
   {
      if(*str ==cValue)
      {
         iPos = iCnt;
         
      }
      str++;
      iCnt++;
   }
   return iPos;
}

int main()
{
   char Arr[20];
   char ch ='\0';
   int iRet = 0;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr);

   printf("Enter Character : \n");
   scanf(" %c",&ch);

   iRet = LastOcc(Arr,ch);
   if(iRet == ERR_NOTFOUND)
   {
      printf("There is no such character\n");
   }
   else
   {
      printf("Last Occurnece of character is %d\n",iRet);
   }
   
   return 0;
}