#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 2; iCnt <= iNo*2; iCnt+=2)
    {        
        printf("%d\t",iCnt);   
    }        
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}