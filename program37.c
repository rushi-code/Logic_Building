///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Display Numbers Forward Direction
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DispalyF(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DispalyF(iValue);

    return 0; 
}
