//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Write Data into file
//
///////////////////////////////////////////////////////////////////////

/*
    Write the data into the file

    int write(int FD, char *Data, int Size);

    FD : File descriptor returned by open
    Data : Name of array / string which conrtains the data that you want to write
    Size : Number of bytes that you want to write

    Return Value : Number of bytes succesfully written in the file

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Fname[30];
    int iRet = 0;
    char Arr[50];


    printf("Enter File Name that you want to open\n");
    scanf("%s",Fname);

    printf("Enter Data that you want to write in file\n");
    scanf(" %[^'\n']s",Arr);


    fd = open(Fname,O_RDWR| O_APPEND);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    iRet = write(fd,Arr,strlen(Arr));

    printf("%d bytes get successfully written in the file\n",iRet);

    close(fd);

    return 0;
}