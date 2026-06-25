#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str , char ch)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ch )
        {
           return TRUE;
        }   
        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the String : \n");
    scanf("%[^\n]",arr);

    printf("Enter the Character \n");
    scanf(" %c",&cValue);
    
    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("%c is Present\n",cValue);
    }
    else
    {
        printf("%c is not Present\n",cValue);
    }

    return 0;
}