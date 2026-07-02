#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z' )
        {
            *str = *str - 32;
        }
        else
        {
            *str = *str + 32;
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
    
    strtogglex(arr);

    printf("String after updation : %s\n",arr);

    return 0;
}