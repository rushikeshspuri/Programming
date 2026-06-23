///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////// 
//
//  Function name : OddFactorial
//  Input :         Integer
//  Output :        Integer
//  Description :   Calculate multiplication of odd numbers
//                  from given number
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 != 0)           // check if number is odd
        {
            iResult = iResult * iCnt;   // only then multiply
        }
    }

    return iResult;
}

///////////////////////////////////////////////////////
//
//  Application to calculate odd factorial
//
///////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Result = %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 7
//  Output : 105
//
///////////////////////////////////////////////////////
