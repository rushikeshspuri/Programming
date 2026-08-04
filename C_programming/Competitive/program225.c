#include<stdio.h>

void Display(int No)
{   
    static int i = 0;

    if( i < No)
    {
        printf("%c\t",'a' + i);
        i++;
        Display(No);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}