// Dispaly "Jay Ganesh n  times on screen with filter"

#include<stdio.h>
// Example of Iteration


void Display(int iNo)
{
     int iCnt = 0;

     if(iNo<0) // filter
     {
        printf("Plz Enter positive number\n");
        return;
     }
     for( iCnt = 1; iCnt<=iNo; iCnt++)

    {
        printf("%d Jay Ganesh...\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency for Jay Ganesh Statement : \n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}