#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount = iCount + 1;
        }
        str++;

        WhiteSpace(str);
    }

    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    fgets(Arr,sizeof(Arr),stdin);

    iRet = WhiteSpace(Arr);

    printf("Number of white space : %d\n",iRet);

    return 0;
}