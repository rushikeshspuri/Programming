#include<stdio.h>

void StrCatX (char *str , char *dest)
{
    while(*str != '\0')
    {
        str++;
    }

    while(*dest != '\0')
    {
        *str = *dest;
        str++;
        dest++;
    }

    *str = '\0';
}

int main()
{
    char Arr [50] = "Marvellous Infosystem";
    char Brr [30] = "Logic Building";
    
    StrCatX(Arr,Brr);

    printf("%s",Arr);

    return 0;
}