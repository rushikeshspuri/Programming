#include<stdio.h>
// itteration while approach into recursive approach program501
void Display()
{
    auto int i = 0;
    
    i = 1;

    if(  i <= 4 )
    {
        printf("Jay Ganesh...%d\n");
        i++;
        Display();
    }
}

int main()
{  
    Display();

    return 0;
}