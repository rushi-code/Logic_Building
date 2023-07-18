#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 1024

int main()
{

    char FileName[50];
    int fd = 0;
    char Arr[BUFFERSIZE];
    int iRet = 0, iCnt = 0, iCountC = 0,iCountS = 0,iCountD = 0;

    printf("Enter file name that to open\n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDONLY);
    
    while(1)
    {    
        iRet = read(fd,Arr,sizeof(Arr));
        if(iRet == 0)
        {
            break;
        }
        for(iCnt = 0; iCnt<iRet;iCnt++)
        {
            if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
            {
                iCountC++;
            }
            else if((Arr[iCnt]>='a')&&(Arr[iCnt]<='z'))
            {
                iCountS++;
            }
            else if((Arr[iCnt]>='0')&&(Arr[iCnt]<='9'))
            {
                iCountD++;
            }
        }

        
    }
    printf("Number of capital case letters are %d\n",iCountC);
    printf("Number of small case letters are %d\n",iCountS);
    printf("Number of digits are %d\n",iCountD);


    close(fd);
    
    return 0;
}
