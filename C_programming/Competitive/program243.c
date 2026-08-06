#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Fname[30];

    printf("Enter the file name : \n");
    scanf("%s",Fname);

    fd = creat(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to create file");
    }
    else
    {
        printf("File gets successfully created");
    }

    return 0;
}