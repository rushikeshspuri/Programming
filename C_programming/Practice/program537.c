#include<stdio.h>

int MUltDigits(int iNo)
{
    int iDigit = 0;
    static int IMult = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        IMult = IMult * iDigit;
        MUltDigits(iNo / 10);    
    }

    return IMult;
}

int main()
{  
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    
    iRet = MUltDigits(iValue);
    printf("Multiplication of Digits %d\n",iRet);


    return 0;
}