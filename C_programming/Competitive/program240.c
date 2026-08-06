#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int Frequency(char Fname[],char ch)
{
    int fd = 0;
    int iCount = 0;
    int iRet = 0;
    int i = 0;
    char Arr[100];

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets successfully opened");

        iRet = read(fd,Arr,sizeof(Arr));

        for(i = 0; i < iRet; i++)
        {
            if(Arr[i] == ch)
            {
                iCount++;
            }
        }

        printf("Data from file is : ");

        write(1,Arr,iRet);
        printf("\n");

        close(fd);
    }


    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char ch = '\0';

    printf("Enter file name : \n");
    scanf("%s",FileName);

    printf("Enter character  : \n");
    scanf(" %c",&ch);

    iRet = Frequency(FileName,ch);

    printf("Frequency of character from file is : %d\n",iRet);

    return 0;
}