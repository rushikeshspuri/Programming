#include<stdio.h>

int Mult(int iNo)
{
    static int iDigit = 1;
    static int iMult = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)          // 0 digit असेल तर skip कर
        {
            iMult = iMult * iDigit;
        }

        iNo = iNo / 10;

        Mult(iNo);
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Product of Digits : %d\n",iRet);
    
    return 0;
}