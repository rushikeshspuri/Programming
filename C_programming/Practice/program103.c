#include<stdio.h>

void CallByAddress(int *iPtr)
{
    (*iPtr)++;
}

int main ()
{
    int iValue = 11;
    
    CallByAddress(&iValue);     //Call by Address

    printf("Value after Function :%d", iValue);

    return 0;
}