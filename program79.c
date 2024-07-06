///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement :  Accept n numbers and count even numbers
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h> 
#include<stdlib.h>  

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCounter = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
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
    int iRet = 0;

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

    iRet = CountEven(ptr,iSize);

    printf("Total even numbers are : %d\n",iRet);

    free(ptr);
    
    return 0; 
}