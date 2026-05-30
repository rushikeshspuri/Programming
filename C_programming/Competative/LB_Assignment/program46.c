///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : CountDiff
//  Input :         Integer
//  Output :        Integer
//  Description :   Calculate difference between
//                  sum of even digits and
//                  sum of odd digits
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
int CountDiff(int iNo)
{
    int iDigit = 0, iSumEven = 0, iSumOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    return iSumEven - iSumOdd;
}

///////////////////////////////////////////////////////
//
//  Application to calculate difference between
//  even digit sum and odd digit sum
//
///////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference between even and odd digits: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 12345
//  Output : -3
//
///////////////////////////////////////////////////////