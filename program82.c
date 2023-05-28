//Taking n numbers from user and opertion on it
#include<stdio.h>
#include<stdlib.h>

void Fun(int Arr[], int iLength)
{

}

int main()
{
    int iSize = 0;
    int iCnt = 0;
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

    printf("Elements of array are :\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    Fun(ptr,iSize);

    free(ptr);

    return 0;

}