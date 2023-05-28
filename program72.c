//Demonstration of static memory allocation without loop
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];

    printf("Enter the elements\n");
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    /*for(iCnt = 0;iCnt<5;iCnt++)
        {
            scanf("%d",&Arr[iCnt]);
        }
    */
    

    printf("Elements of array are \n");
    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);
    printf("%d\n",Arr[4]);

    /*
    for(iCnt = 0; iCnt<5; iCnt++)
    {
        printf("%d",Arr[iCnt]);
    }
    */

    return 0;
}