#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;

    if(  i <= iNo )
    {
        printf("%d\n",i);
        i++;
        Display(iNo);
    }
}

int main()
{  
    int iValue = 0;
    
    printf("Enter the frequency : \n");
    
    scanf("%d",&iValue);
    
    Display(iValue);

    printf("end of main : \n");

    return 0;
}