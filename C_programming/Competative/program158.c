#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;

    while(str >= start)
    {
        printf("%c\n", *str);
        str--;
    }
}

int main()
{
    char Arr[50];

    printf("Enter String\n");
    scanf("%[^\n]", Arr);

    Reverse(Arr);

    return 0;
}