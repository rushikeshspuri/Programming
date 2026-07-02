#include<stdio.h>

void Display(char ch)
{
    int i = 0;
  
    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch ; i <= 'Z'; i++)
        {
            printf("%c\n",i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch ; i <= 'z'; i++)
        {
            printf("%c\n",i);
        }
    }
    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char ch = '\0';

    printf("Enter character\n");
    scanf("%c",&ch);

    Display(ch);

    return 0;
}