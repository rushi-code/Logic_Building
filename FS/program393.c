/*
Create New File

int creat(char *File_name, int Permission)

File_Name : Name of file that you want to create
Permission : Permissions for new file(0777)

Return value : on success it retuns >= 0
on failure return -1
*/


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char Fname[30];

    printf("Enter File name that you want to create\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);
    {
        if(fd == -1)
        {
            printf("Unable to create the file\n");
            return -1;
        }
        else
        {
            printf("File is successfully created %d\n",fd);
        }
    }
    
    return 0;
}
