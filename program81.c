//avg of given numbers
#include<stdio.h> 
#include<stdlib.h> 

float Avg(int Arr[],int iLength)
{
    int iSum = 0;
    int iCnt = 0;


   for(iCnt = 0; iCnt <iLength; iCnt++)
   {
    iSum = iSum + Arr[iCnt];
   }
   return ((float)iSum/(float)iLength);
   
}
int main()  
{
    int iSize = 0;  
    int *ptr = NULL; 
    int iCnt = 0; 
    float  fRet = 0.0f;

   
    printf("Enter number of elements \n");
    scanf("%d",&iSize);

    
    ptr =(int*)malloc(iSize*sizeof(int));

    printf("Enter Elements\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Avg(ptr,iSize); 
    printf("Avg is %f\n",fRet);
    

   
    free(ptr);
    return 0;  
}