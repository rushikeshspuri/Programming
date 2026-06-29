#include<stdio.h>

void strCpyX(char *str ,char *sstr )
{
    while (*str != '\0')
    {
        *sstr = *str ;
        str++;
        sstr++;
    }

    *sstr = '\0';
}

int main()
{
    char Arr [30] = "Marvellous Multi OS";
    char Brr [30] = {'\0'};

    strCpyX(Arr,Brr);

    printf("%s",Brr);
    return 0;
}