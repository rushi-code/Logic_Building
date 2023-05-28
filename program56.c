//checking given digit(8) is present in number  or not  (by using flag concept)
#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;


    while(iNo!=0)
    {
        iDigit= iNo%10;
        if(iDigit==8)
        {
            bFlag = true;
            break;
        }
        iNo = iNo/10;
    }
    
    return bFlag;
}

int  main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet =CheckDigit(iValue);
    if(bRet ==true)
    {
        printf("8 is present\n");
    }
    else
    {
        printf("8 is absent\n");
    }
    return 0;
}