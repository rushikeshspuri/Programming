///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : MultiplyDigits
//  Input :         Integer
//  Output :        Integer
//  Description :   Calculate multiplication of
//                  digits from given number
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
int MultiplyDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)   // special case for 0
    {
        return 0;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMult = iMult * iDigit;

        iNo = iNo / 10;
    }

    return iMult;
}

///////////////////////////////////////////////////////
//
//  Application to calculate multiplication
//  of digits
//
///////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = MultiplyDigits(iValue);

    printf("Multiplication of digits: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 1234
//  Output : 24
//
///////////////////////////////////////////////////////