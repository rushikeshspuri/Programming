#include<stdio.h>
// Recurssion infinite approach
void Display()
{
    static int i = 1;

    printf("Jay Ganesh...%d\n",i);
    i++;

    Display();
}

int main()
{  
    Display();

    return 0;
}
