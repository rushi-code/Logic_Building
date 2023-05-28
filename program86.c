//Taking n numbers from user and find out smallest & largest number in one function
//Time complexity N
#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];

    for(iCnt= 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }

    }
    printf("Maximum number is %d\n",iMax);
    printf("Minimum number is %d\n",iMin);

    
}

int main()
{
    int iSize = 0;
    int iRet = 0;
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

    MaxMin(ptr,iSize);

    free(ptr);

    return 0;

}