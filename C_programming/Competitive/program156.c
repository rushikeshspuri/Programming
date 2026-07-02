#include<stdio.h>

int Difference(char *str)
{
    int iCountCapital = 0;
    int iCountSmall = 0;
    int iDiff  = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }

          str++;

    }

    iDiff = iCountSmall - iCountCapital;
    return iDiff;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^\n]s",Arr);

    iRet = Difference(Arr);

    printf("Difference is : %d\n",iRet);

    return 0;
}