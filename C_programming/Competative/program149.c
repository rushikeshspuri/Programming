#include <stdio.h>

void DisplayAscii()
{
    int iCount = 0;

    printf("Char\tDecimal\tOctal\tHexadecimal\n");
    printf("----------------------------------------\n");

    for(iCount = 32; iCount <= 126; iCount++)
    {
        printf("%c\t%d\t%o\t%X\n",
               iCount, iCount, iCount, iCount);
    }
}

int main()
{
    DisplayAscii();

    return 0;
}