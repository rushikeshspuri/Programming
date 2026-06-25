#include<stdio.h>

void ReverseDisplay(char *str)
{
    char *start = NULL;
    
    start = str;

    while(*str != '\0')
    {
        str++;
    }
    
    str--;

    while(start <= str)
    {
        printf("%c\t",*str);
        str--;
    }

}


int main()
{
    char arr[20] = {'\0'};

    printf("Enter the String : \n");
    scanf("%[^\n]",arr);


    
    ReverseDisplay(arr);

}