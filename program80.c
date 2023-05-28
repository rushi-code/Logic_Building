//Count odd numbers from given numbers
#include<stdio.h> 
#include<stdlib.h> 

int CountOdd(int Arr[],int iLength)
{
   int iCnt = 0;
   int iCounter = 0;

   for(iCnt = 0; iCnt <iLength; iCnt++)
   {
        if((Arr[iCnt])%2 !=0)
        {
            iCounter++;
        }
   }
   return iCounter;
   
}
int main()  
{
    int iSize = 0; 
    int *ptr = NULL; 
    int iCnt = 0; 
    int  iRet = 0;

    printf("Enter number of elements \n");
    scanf("%d",&iSize);

    ptr =(int*)malloc(iSize*sizeof(int));

    printf("Enter Elements\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountOdd(ptr,iSize); 
    printf("odd no are %d\n",iRet);
    
    free(ptr);

    return 0; 
}