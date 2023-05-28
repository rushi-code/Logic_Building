//checking given digit(8) is present in number  or not  (by using iNo value)
#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(int iNo)
{
    int iDigit = 0;


    while(iNo!=0)
    {
        iDigit= iNo%10;
        if(iDigit==8)
        {
            break;
        }
        iNo = iNo/10;
    }
    
    if(iNo==0)
    {
        return false;
    }
    else 
    {
        return true;
    }
}

int main()
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