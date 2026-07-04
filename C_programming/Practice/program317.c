#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x1;
    UINT iPos = 0;
    UINT iAns = 0;
   
    printf("Enter Number : \n");
    scanf("%d",&iNo);

    printf("Enter the position\n");
    scanf("%d",&iPos);
   
    iMask = iMask << (iPos - 1);

    if(iAns == iMask)
    {
        printf("bit is ON\n");
    }
    else
    {
        printf("bit is OFF\n");
    }

    return 0;
}