///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Addition of Two Numbers
//
///////////////////////////////////////////////////////////////////////

#include"program5Header.h"

int main()
{
    auto unsigned int iNo1 = 0;
    auto unsigned int iNo2 = 0;
    auto unsigned int iAns  = 0;

    printf("Enter First Number: \n");
    scanf("%d",&iNo1);

    printf("Enter Second Number: \n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2); 

    printf("Addition is : %d\n",iAns);

    return 0;
}