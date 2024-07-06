//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Display factors 
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void FactorsR(int iNo)
{
    static int iCnt = 1;
    if(iCnt<=(iNo/2))
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        FactorsR(iNo);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    FactorsR(iValue);
    
    return 0;
}