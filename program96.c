//Pattern Printing
//Input : 7
//Output : A   A   A   A   A   A   A

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("A\t");
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