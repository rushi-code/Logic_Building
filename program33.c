//base and power using long int 
#include<stdio.h>
#include<stdbool.h>
long int CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    long int iResult = 1;

    for(iCnt = 1; iCnt<=iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    long int iAns = 0;
    
    printf("Enter Base\n");
    scanf("%d",&iValue1);
   
    printf("Enter Power\n");
    scanf("%d",&iValue2);

    iAns = CalculatePower(iValue1,iValue2);

    printf("Result is %ld",iAns);


    return 0;
}