#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ' )
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
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']",arr);

    printf("String before updation : %s\n",arr);
    
    iRet = CountWhite(arr);

    printf("The white space is : %d\n",iRet);

    return 0;
}