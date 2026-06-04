#include<stdio.h>

void CallByValue(int iNo)
{
    iNo++;
}

int main ()
{
    int iValue = 11;
    
    CallByValue(iValue);        //CallbyValue(11)

    printf("Value after Function :%d", iValue);

    return 0;
}