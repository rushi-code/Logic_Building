///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement :  Accept n numbers and one another number. Check whether that number is present or not (Linear Search) without flag
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h> 
#include<stdlib.h> 
#include<stdbool.h> 

// Avoid this logic (Segmentation Fault)
bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(Arr[iCnt] == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()         
{
    int iSize = 0;
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    bool bRet = false;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements of array : \n");
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter Element that you want to search\n");
    scanf("%d",&iValue);

    printf("Elements of array are : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    bRet = Search(ptr,iSize,iValue);

    if(bRet == true)
    {
        printf("%d is present in array\n",iValue);
    }
    else
    {
        printf("%d is not present in array\n",iValue);
    }

    free(ptr);

    return 0; 
}