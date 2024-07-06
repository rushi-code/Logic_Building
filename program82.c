///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement :  Template for problems on n numbers (Array)
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h> 
#include<stdlib.h>  

void Demo(int Arr[], int iLength)
{
    //logic
}

int main()         
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

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

    Demo(ptr,iSize);

    free(ptr);

    return 0; 
}