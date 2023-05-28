//factorial backward loop
#include<stdio.h>
#include<stdbool.h>
int Factorial(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        iResult = iResult *iCnt;
    }
    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;


    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Result is %d\n",iRet);

    
    return 0;
}