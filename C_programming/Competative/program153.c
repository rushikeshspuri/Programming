#include<stdio.h>

void Display(char ch)
{
    printf("Char\tDecimal\tOctal\tHexadecimal\n");
    printf("-------------------------------------\n");

    printf("%c\t%d\t%o\t%X\n",
               ch, ch, ch, ch);

}

int main()
{
    char ch = '\0';
    
    printf("Enter character\n");
    scanf("%c",&ch);

    Display(ch);

    return 0;
}