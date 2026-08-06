#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Fname[30];

    printf("Enter the file name : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File gets successfully opened");
    }

    close(fd);

    return 0;
}