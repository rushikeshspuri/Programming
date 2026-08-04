#include<stdio.h>

void Display(int No)
{
    static int i = 1;
    
    if( i <= No )
    {
        printf("%d\t",i);
        i++;
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