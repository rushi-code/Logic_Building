// position of character given by user
#include<stdio.h>
int FirstOcc(char *str, char cValue)
{
   int iCnt = 1;
   int iPos = 0;

   while(*str !='\0')
   {
      if(*str ==cValue)
      {
         iPos = iCnt;
         break;
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

   iRet = FirstOcc(Arr,ch);
   printf("First Occurnece of chatacter is %d\n",iRet);


   return 0;
}