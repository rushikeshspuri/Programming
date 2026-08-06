#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void DisplaY(char FileName[])
{
    int fd = 0;
    char Arr[100];
    int iRet = 0; 

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        iRet = read(fd,Arr,sizeof(Arr));

        write(1,Arr,iRet);

        close(fd);
    }   

}

int main()
{

    char Fname[30];

    printf("Enter the file name : \n");
    scanf("%s",Fname);

    DisplaY(Fname);

    return 0;
}