#include<stdio.h>

void Display()
{
    static char i = 'A';

    if( i <= 'F')
    {
        printf("%c\t",i);
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}