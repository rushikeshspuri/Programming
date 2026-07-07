#include<stdio.h>

typedef unsigned int UINT;

// Position : 12 & 23


int main()
{
    UINT iMask = 0x00400800;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;

    printf("Updated Number %d\n",iResult);

    
    return 0;
}
