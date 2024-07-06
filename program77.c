///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement :  Accept n numbers and display even numbers
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h> 
#include<stdlib.h>  

void EvenDisplay(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()         
{
    int iSize = 0; 
    int *ptr = NULL;
    int iCnt = 0;

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

    EvenDisplay(ptr,iSize);

    free(ptr);
    
    return 0; 
}