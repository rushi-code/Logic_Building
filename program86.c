///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement :  Accept n numbers and find smallest and largest number from that.
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h> 
#include<stdlib.h>  

void MinMax(int Arr[], int iLength)
{
    int iMin = Arr[0];
    int iMax = Arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt<iLength; iCnt++)     //O(N)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }

        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    printf("Smallest Element is %d\n",iMin);
    printf("Largest Element is %d\n",iMax);
    
}

int main()         
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements of array : \n");
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    MinMax(ptr,iSize);

    free(ptr);

    return 0; 
}