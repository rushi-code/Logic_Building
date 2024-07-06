//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String Input from user
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char Arr[10];

    printf("Enter Your Name : \n");
    scanf("%[^'\n']s",Arr); //Accept input till enter(\n); Special scanf

    printf("Your Name is : %s\n",Arr);
    
    return 0;
}