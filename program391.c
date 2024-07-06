//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Open file
//
///////////////////////////////////////////////////////////////////////

/*

1: Open existing file

int open(char *File_name, int Mode);

File_name : Name of file that you want to open
Mode : Mode in which you want to open the file
    O_RDONLY    Read mode
    O_WRONLY    Write mode
    O_RDWR      Read + Write mode

Return value : integer which indicates the index ie File descriptor

Success : Return value >= 0 (Always starts from 3)
Failrure : return value is -1

2: Close the file

void close(int fd);

fd : Its a return value of open system call

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Demo.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    else
    {
        printf("File is successfully opened with FD %d\n",fd);
    }
    close(fd);

    return 0;
}