#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{

    if(ch >= 'a' && ch <= 'z') 
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
        printf("it is Small case Character\n");
    }
    else
    {
        printf("it is not Small case Character\n");
    }
    return 0;
}