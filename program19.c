
// print n number on screen
#include <stdio.h>

void Display(int iNo)
{
    if(iNo<0) // filter for negative number
    {
        printf("Error: invalid input\n");
        printf("Enter positive number\n");
        return;
    }
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency\n");
    scanf("%d", &iValue);
    Display(iValue);

    return 0;
}