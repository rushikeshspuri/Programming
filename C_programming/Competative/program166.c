#include<stdio.h>


int FirstChar(char *str , char ch)
{
    int iCount = 0;
    int iIndex = 0;
    
    while(*str != '\0')
    {
        if(*str == ch )
        {
            return iIndex;
        }   
        iIndex++;
        str++;
    }
   
    return -1;

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
    
    iRet = FirstChar(arr,cValue);

    if(iRet == -1)
    {
         printf("Character Not Found");
    }
    else
    {
        printf("The Index of Character is is %d : ",iRet);
    }    
    return 0;
}