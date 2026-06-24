#include<stdio.h>

int main()
{
    char *str = "Ganesh";       

    // Itteration
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }    
    
    return 0;
}