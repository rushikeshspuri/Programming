#include<stdio.h>

void Reverse(int No)
{
    int iDigit = 0;
   
    if(No != 0)
    {
        iDigit = No % 10;
        No = No / 10;
        printf("%d",iDigit);
        Reverse(No);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Reverse(iValue);

    return 0;
}