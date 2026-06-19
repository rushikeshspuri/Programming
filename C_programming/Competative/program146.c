#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{

    if(ch >= '0' && ch <= '9') 
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet ==  true)
    {
        printf("it is digit\n");
    }
    else
    {
        printf("it is not a digit\n");
    }
    return 0;
}