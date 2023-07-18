/*
1: Open existing file 

int open(char *File_name, int Mode);
File_name: Name of file that you want to open
Mode : Mode in which you want to open file
    O_RDONLY    Read Mode
    O_WRONLY    Write Mode
    O_RDWR      Read + Write mode

Return Valye : integer which  indicates the index ie file descriptor

Success: return value >= 0 (Always Start from 3)
Failure : return value is -1

2: Close the file

void close(int fd);

fd : Its a return value of open system call

*/


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char Fname[30];

    printf("Enter File name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    {
        if(fd == -1)
        {
            printf("Unable to open the file\n");
            return -1;
        }
        else
        {
            printf("File is successfully opned with FD %d\n",fd);
        }
    }

    close(fd);

    return 0;
}
