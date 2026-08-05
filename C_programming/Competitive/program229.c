#include<stdio.h>

int Strlen(char *str)
{
    int iCount = 0;
    int i = 0;
 
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    
    return iCount;
}

int main()
{
    char Arr [20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%s",&Arr);

    iRet = Strlen(Arr);

    printf("Count of Characters : %d\n",iRet);
    
    return 0;
}