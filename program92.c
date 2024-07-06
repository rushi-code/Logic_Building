///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement :  Accept n numbers and one another number. return last occurence of that element(index) (use of userdefine macro )
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h> 
#include<stdlib.h> 

#define ERR_NOTFOUND -1

int SearchLastOccurence(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPos = iCnt;
        }
    }

    return iPos;
}

int main()         
{
    int iSize = 0;
    int iValue = 0;
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

    printf("Enter Element that you want to search\n");
    scanf("%d",&iValue);

    printf("Elements of array are : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = SearchLastOccurence(ptr,iSize,iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("%d occured at index %d\n",iValue,iRet);
    }

    free(ptr);

    return 0; 
}