#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    while (*str != 0)
    {
        if(*str == 'a' || *str == 'e' || *str == 'i'|| *str == 'o' || *str == 'u'|| 
            *str == 'A' ||*str == 'E'  ||*str == 'I' ||*str == 'O' ||*str == 'U')
            {
                return true;
            }
        str++;
    }       
    return false;
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter String\n");
    scanf("%[^\n]s",Arr);

    bRet = ChkVowel(Arr);

    if (bRet == true)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not a Vowel\n");
    }
   

    return 0;
}