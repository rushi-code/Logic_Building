///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement :  Static memory allocation (loop)
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5]; //static memory
    int iCnt = 0;

    printf("Enter the elements\n");

    for(iCnt = 0; iCnt<5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elemens of array are \n");

    for(iCnt = 0; iCnt<5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0; 
}