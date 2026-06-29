#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = * src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr [30] = "MARVELLOUS multi os";
    char Brr [30] = {'\0'};

    StrCpyCap(Arr,Brr);

    printf("%s",Brr);

    return 0;
}