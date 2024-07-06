//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Create File
//
///////////////////////////////////////////////////////////////////////

/*

Create new file

int creat(char *File_name, int Permission)

File_name   : Name of file that you want to create
Permission  : Permissions for new file (0777)

Return Value : On success it returns >= 0
On failure it returns -1

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    char Fname[30];

    printf("Enter File Name that you want to create\n");
    scanf("%s",Fname);


    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    else
    {
        printf("File is successfully created\n");
    }

    return 0;

}