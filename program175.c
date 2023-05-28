// small and capital character count in one function
#include<stdio.h>

void Freq(char *str)
{
   int iCntC = 0;
   int iCntS = 0;

   while(*str !='\0')
   {
      if(*str>='a'&& *str<='z' )
      {
        iCntS++;  
      }
      else if(*str>='A'&& *str<='Z')
      {
         iCntC++;
      }
      str++;
      
   }
   printf("Small case characters count is %d\n",iCntS);

   printf("Capital case characters count is %d\n",iCntC);

   
}

int main()
{
   char Arr[20];
   char ch ='\0';
   int iRet = 0;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr);

   

   Freq(Arr);
   
   return 0;
}