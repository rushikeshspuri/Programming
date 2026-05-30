///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Macro definitions
//
///////////////////////////////////////////////////////
#define True 1
#define False 0

typedef int BOOL;

///////////////////////////////////////////////////////
//
//  Function name : CheckZero
//  Input :         Integer
//  Output :        BOOL
//  Description :   Check whether given number
//                  contains zero or not
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//  Time Complexity : O(N)
//
///////////////////////////////////////////////////////
BOOL CheckZero(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;        // handle negative numbers
    }

    while(iNo > 0)
    {
        if(iNo % 10 == 0)   // check each digit
        {
            return True;
        }

        iNo = iNo / 10;     // remove last digit
    }

    return False;
}

///////////////////////////////////////////////////////
//
//  Application to check whether
//  number contains zero or not
//
///////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    BOOL bRet = False;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if(bRet == True)
    {
        printf("Contains Zero!");
    }
    else
    {
        printf("Does Not Contain Zero!");
    }

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 1024
//  Output : Contains Zero!
//
///////////////////////////////////////////////////////