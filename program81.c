///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement :  Accept n numbers and calculate average
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h> 
#include<stdlib.h>  

float Avg(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum / (float)iLength);
}

int main()         
{
    int iSize = 0; 
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0f;

    printf("Enter Number of Elements : \n");

    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));   

    printf("Enter The Elements\n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are \n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    fRet = Avg(ptr,iSize);
    printf("Average is : %.2f\n",fRet);
    
    free(ptr);
    
    return 0; 
}