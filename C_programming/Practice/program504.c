#include<stdio.h>
// Recurssion infinite approach
void Display()
{
    printf("Jay Ganesh...\n");

    Display();
}

int main()
{  
    Display();

    return 0;
}
