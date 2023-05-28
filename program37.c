//sqeunecely number (forward loop)
#include<stdio.h>
#include<stdbool.h>
void DisplayF(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayF(iValue);

    
    return 0;
}