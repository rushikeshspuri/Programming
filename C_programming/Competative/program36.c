///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : DiffFactorial
//  Input :         Integer
//  Output :        Integer
//  Description :   Calculate difference between
//                  even factorial and odd factorial
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
int DiffFactorial(int iNo)
{
    int iCnt = 0;
    int iFactEven = 1;
    int iFactOdd = 1;

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 == 0)           // check if number is even
        {
            iFactEven = iFactEven * iCnt;   // only then multiply
        }
        else
        {
            iFactOdd = iFactOdd * iCnt; // for odd
        }
    }

    return iFactEven - iFactOdd;
}

///////////////////////////////////////////////////////
//
//  Application to calculate difference between
//  even factorial and odd factorial
//
///////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = DiffFactorial(iValue);

    printf("Result = %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 6
//  Output : 33
//
///////////////////////////////////////////////////////