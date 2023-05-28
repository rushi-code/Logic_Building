// display factors 
//without =sign in  iCnt<iNo

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    for( iCnt =1 ; iCnt<iNo; iCnt++)// O(N)
    {
       if((iNo%iCnt)==0)
       {
        printf("%d\n",iCnt);
       }
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter Number: \n");
    scanf("%d",&iValue);
    
    DisplayFactors(iValue);
    return 0;
}

//Time Complexity : O(N)
//Where N Is input(Natural Number)