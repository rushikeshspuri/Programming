#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int Size(char FileName[])
{
    int fd = 0;
    char Arr[100];
    int iSize = 0; 

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        iSize = lseek(fd, 0, SEEK_END);   // पॉईंटर परत सुरुवातीला (position 0) आण

        close(fd);

        return iSize;
    }   

}

int main()
{

    char Fname[30];
    int iRet = 0;

    printf("Enter the file name : \n");
    scanf("%s",Fname);

    iRet = Size(Fname);

    printf("file size : %d\n",iRet);
  
    return 0;
}