#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z' )
        {
            *str = *str - 'A' + 'a';
        }

        str++;
    }
    
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter the String : \n");
    scanf("%[^'\n']",arr);

    printf("String before updation : %s\n",arr);
    strlwrx(arr);

    printf("String after updation : %s\n",arr);

    return 0;
}