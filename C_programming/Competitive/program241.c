#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void Display(char Fname [], int iSize)
{
    int fd = 0;
    char Arr[100];
    int i = 0;
    int iRet = 0;
    
    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file : \n");
    }
    else
    {
        iRet = read(fd,Arr,12);

        write(1,Arr,12);
    }
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%s",FileName);

    printf("Enter the number of characters : \n");
    scanf("%d",&iValue);

    Display(FileName,iValue);

    return 0;
}