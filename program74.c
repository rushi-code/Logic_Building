//Demonstration of dynamic memory allocation with loop

#include<stdio.h> //IO
#include<stdlib.h> //memory management


int main()  //Entry point function
{
    int iSize = 0;  // To store size of array

    int *ptr = NULL; // To store address of array

    int iCnt = 0; // loop counter

    // Step 1: Accept The Number of Elements from user
    printf("Enter number of elements \n");
    scanf("%d",&iSize);

    // Step 2: Allocate memory dynamically
    ptr =(int*)malloc(iSize*sizeof(int));

    //Step 3: Accept values from user

    printf("Enter Elements\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are :\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    return 0;  //Return Success to OS
}