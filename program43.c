///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Display Numbers Forward Direction (while loop)
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DispalyF(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while(iCnt<=iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
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
