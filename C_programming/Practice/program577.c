#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>      // only linux based OS

int main()
{
    int fd = 0;
    int iRet = 0;

    fd = open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("file gets successfully opened with fd : %d\n",fd);

        iRet = write(fd,"Jay Ganesh...",13);
        
        printf("%d bytes get succesfully written \n",iRet);
        
        close(fd);
    }
    
    return 0;
}