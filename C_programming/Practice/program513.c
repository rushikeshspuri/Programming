#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    
    i = 1;

    while(  i <= iNo )
    {
        printf("Jay Ganesh...\n");
        i++;
    }
}

int main()
{  
    int iValue = 0;

    printf("Enter the Frequency\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}