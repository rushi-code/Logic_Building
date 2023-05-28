// length of string (include inbuit function)
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
   char Arr[10];
   int iRet  = 0;

   printf("Enter sting :\n");
   scanf("%[^'\n']s",Arr);
   iRet = strlen(Arr);
   printf("Length is %d\n",iRet);



   return 0;
}