#include<stdio.h>

int Small(char *str)
{
    int iSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        str++;
    }

    return iSmall;
}

int main()
{
    char Arr[20];

    int iRet = 0;

    printf("Enter string : \n");
    scanf("%s",Arr);

    iRet = Small(Arr);

    printf("Small Count : %d\n",iRet);

    return 0;
}