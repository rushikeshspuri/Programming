#include<stdio.h>

void Display(int No)
{   
    if( No > 0)
    {
        printf("%d\t",No);
        No--;
        Display(No);
    }
}

int main()
{
    int j = 0;

    printf("Enter number : \n");
    scanf("%d",&j);

    Display(j);

    return 0;
}