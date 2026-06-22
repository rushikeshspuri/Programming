#include<stdio.h>

int main ()
{
    int iArr[] = {10,20,30,40,50};

    printf("%d\n",iArr);    // Address of First Element
    printf("%d\n",&iArr);   // Address of Whole Array
    printf("%d\n",&iArr[0]);// Address of First Element
    return 0; 
}
