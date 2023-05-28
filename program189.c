// copying data from one string to another  (concatenation)
#include<stdio.h>
//1: Travel till end of dest
//2: copy data from src to dest
//3: write '\0' at end of test 
void strcatX(char *src ,char *dest)
{
  //1: Travel till end of dest

  while(*dest!='\0')
  {
    dest++;
  }
  
  //2: copy data from src to dest

  while(*src!='\0')
  {
    *dest = *src;
    dest++;
    src++;
  }

  //3: write '\0' at end of test
  *dest ='\0';
  
  
}
  
int main()
{
   char Arr[20];
   char Brr[20]="Demo";
   

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr);
   
   strcatX(Arr,Brr);
   printf("String after copy is %s\n",Brr);
   return 0;
}