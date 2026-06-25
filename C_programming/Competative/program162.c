#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9' )
        {
            printf("%c\n",*str);
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
    
    DisplayDigit(arr);

    printf("String after updation : %s\n",arr);

    return 0;
}