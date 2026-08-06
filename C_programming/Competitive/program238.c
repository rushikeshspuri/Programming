#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int CountSmall(char Fname[])
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
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
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

    printf("Enter file name : \n");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of small letters from file are : %d\n",iRet);

    return 0;
}