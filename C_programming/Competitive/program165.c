#include<stdio.h>


int CountChar(char *str , char ch)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ch )
        {
           iCount++;
        }   
        str++;
    }

    return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^\n]",arr);

    printf("Enter the Character \n");
    scanf(" %c",&cValue);
    
    iRet = CountChar(arr,cValue);

    printf("The Character Frequency is %d : ",iRet);

    return 0;
}