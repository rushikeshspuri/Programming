#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int CountCapital(char Fname[])
{
    char Arr[100];
    int fd = 0;

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        fd = open(Fname,O_RDONLY);
    
        read(fd,Arr,sizeof(Arr));

        close(fd);
    }
  

}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    iRet = CountCaptial(FileName);

    printf("Number of capital letters from file are : %d\n",iRet);

    return 0;
}