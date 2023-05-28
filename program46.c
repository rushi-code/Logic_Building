//base and power while loop
#include<stdio.h>
#include<stdbool.h>
int CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    int iResult = 1;
    
    iCnt = 1;
    while(iCnt<=iPower)
    {
        iResult = iResult *iBase;
        iCnt++;
    }
    return iResult;

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iAns = 0;
    
    printf("Enter Base\n");
    scanf("%d",&iValue1);
   
    printf("Enter Power\n");
    scanf("%d",&iValue2);

    iAns = CalculatePower(iValue1,iValue2);

    printf("Result is %d",iAns);


    return 0;
}