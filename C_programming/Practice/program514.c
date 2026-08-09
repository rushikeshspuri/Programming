#include<stdio.h>
// using recurrsion
void Display(int iNo)
{
    static int i = 1;

    if(  i <= iNo )
    {
        printf("Jay Ganesh...%d\n",i);
        i++;
        Display(iNo);
    }
}

int main()
{  
    int iValue = 0;
    
    printf("Enter the frequency\n");
    
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}