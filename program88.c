//Taking n numbers from user and check given number is prsent (without flag)
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt= 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt==iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iNo = 0;
    bool bRet = false;
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

    bRet =Check(ptr,iSize,iNo);
    if(bRet == true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(ptr);

    return 0;

}