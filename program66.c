//accept number and return its digit avg

#include<stdio.h>
#include<stdbool.h>
float DigitsAvg(int iNo)
{

    int iDigit = 0;
    int iCnt= 0;
    int iSum =0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo%10;
        iSum = iSum +iDigit;
        iCnt++;
        iNo = iNo /10;
    }
  
    return ((float)iSum/(float)iCnt); //typecasting 
    
}


int  main()
{
    int iValue = 0;
    
    float fRet = 0.0f;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    fRet =DigitsAvg(iValue);
    
    printf("Avg is %f\n",fRet);
    
   
    return 0;
}