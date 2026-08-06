#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int AppendString(char Fname[], char Str[])
{
    int fd = 0;
    int iRet = 0;

    fd = open(Fname, O_WRONLY | O_APPEND | O_CREAT, 0666);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    iRet = write(fd, Str, strlen(Str));

    close(fd);

    return iRet;
}

int main()
{
    char FileName[30];
    char Str[100];
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%s", FileName);

    printf("Enter string : \n");
    scanf(" %[^\n]", Str);      // spaces सकट पूर्ण line वाचण्यासाठी

    iRet = AppendString(FileName, Str);

    if(iRet != -1)
    {
        printf("%d bytes written successfully\n", iRet);
    }

    return 0;
}