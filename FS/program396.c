/*
Write data into file

int write(int FD, char *Data, int Size)

FD : File descriptor returned by open
Data : Name of array/ string which contains the data that you want to write
Size : Number of bytes that you want to write

Return value :  Number of bytes successfully written in the file
*/


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Fname[30];
    int iRet = 0;
    char Arr[50];

    printf("Enter File name that you want to open\n");
    scanf("%s",Fname);

    printf("Enter data that you want to write into the file\n");
    scanf(" %[^'\n']s",Arr);

    fd = open(Fname,O_RDWR| O_APPEND);
    
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    iRet = write(fd,Arr,strlen(Arr));

    printf("%d bytes gets successully written in the file\n",iRet);

    close(fd);
    
    
    return 0;
}
