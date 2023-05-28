//accept number and check it is pallindrome number or not

//pallindrome number = such a number which is same number after reverse eg(121, 1331)

#include<stdio.h>
#include<stdbool.h>
bool ReverseNumber(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = iNo;  // after loop traveling iNo = 0 , so before loop travelling iNo store in iTemp 

   
    while(iNo !=0)
    {
        iDigit = iNo%10;
        iReverse = (iReverse*10)+ iDigit;
        iNo = iNo/10;
    }
    
    if(iReverse == iTemp)
    {
        return true;
    }
    else 
    {
        return false;
    }
}


int  main()
{
    int iValue = 0;
    
    bool bRet = false;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet =ReverseNumber(iValue);
    
    if(bRet ==true)
    {
        printf("It is pallindrome\n");
    }
    else
    {
        printf("it is not pallindrome\n");
    }
    
   
    return 0;
}