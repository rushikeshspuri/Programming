#include<stdio.h>

void Display(int No)
{   
    if(No > 0)
    {
        printf("%d\t *\t",No);
        No--;
        Display(No);
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}