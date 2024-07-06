//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Read Data from file
//
///////////////////////////////////////////////////////////////////////

/*
    Read the data from the file

    int read(int FD, char *Data, int Size);

    FD : File descriptor returned by open
    Data : Name of array / string which is empty
    Size : Number of bytes that you want to read

    Return Value : Number of bytes succesfully read from the file

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
    char Arr[50] = {'\0'} ;


    printf("Enter File Name that you want to open\n");
    scanf("%s",Fname);


    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    iRet = read(fd,Arr,8);

    printf("%d bytes get successfully fetched from the file\n",iRet);

    printf("Data from file is : \n");
    write(1,Arr,iRet);

    close(fd);

    return 0;
}