//Taking n numbers from user and return index of first occ of given number 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FirstOcc(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
    return iCnt;
    }
    
}



int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iNo = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter Total Elements\n");
    scanf("%d",&iSize);

    ptr= (int*)malloc(iSize*sizeof(int));

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter Element %d: ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter number to check\n");
    scanf("%d",&iNo);

    printf("Elements of array are :\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet =FirstOcc(ptr,iSize,iNo);
    if(iRet == -1)
    {
        printf("There is no such element\n");
    }
    else
    {
    printf("Index is %d",iRet);
    }
    
    free(ptr);

    return 0;

}