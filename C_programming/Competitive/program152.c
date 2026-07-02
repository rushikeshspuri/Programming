#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
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
    char ch = '\0';
    bool bRet = false;
    printf("Enter character\n");
    scanf("%c",&ch);

    bRet = ChkSpecial(ch);

    if(bRet == true)
    {
        printf("it is Special character\n");
    }
    else
    {
         printf("it is not a Special character\n");
    }

    return 0;
}