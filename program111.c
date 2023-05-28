//Pattern Printing
//Input : 5
//Output : -5   -4  -3  -2  -1  0   1   2   3   4   5
//two for loop  

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt<=0; iCnt++)
    {
        printf("%d\t",iCnt );
    }
    for(iCnt = 1; iCnt<= iNo; iCnt++ )
    {
        printf("%d\t",iCnt);
    }

    
    printf("\n");
}



int main()
{
    int iFreq = 0;
    printf("Enter the frequency of symbol :\n");
    scanf("%d",&iFreq);

    Display(iFreq);
    
    return 0;
}
