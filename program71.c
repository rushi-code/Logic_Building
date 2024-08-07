///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement :  Dynamic memory allocation
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter Number of Elements : \n");    //1
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));   //2

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    
    printf("Memory Allocated Successfully\n");

    return 0; 
}