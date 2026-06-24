#include<stdio.h>


int main()
{
    char *str = "Ganesh";       // will be same as char str[] = "Ganesh"
    
    //Sequence
    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;
    
    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    return 0;
}