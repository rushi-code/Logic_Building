//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Delete file
//
///////////////////////////////////////////////////////////////////////

/*
   Delete the file

   remove(char * FileName);

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{

    char Fname[30];
    
    printf("Enter file that you want to delete\n");
    scanf("%s",Fname);

    remove(Fname);

    return 0;
}