#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    char c2 = ch;

    if((c2 >= 'A' && c2 <= 'Z')|| 
       (c2 >= 'a' && c2 <= 'z'))
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
        printf("it is Character\n");
    }
    else
    {
        printf("it is not a Character\n");
    }
    return 0;
}