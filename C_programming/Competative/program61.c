///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : CountLessThanSix
//  Input :         Integer
//  Output :        Integer
//  Description :   Count digits less than 6
//                  from given number
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//  Time Complexity : O(N)
//
///////////////////////////////////////////////////////
int CountLessThanSix(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        if(iNo % 10 < 6)     // check if last digit is less than 6
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

///////////////////////////////////////////////////////
//
//  Application to count digits
//  less than 6
//
///////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = CountLessThanSix(iValue);

    printf("Frequency of digits less than 6 is : %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 123456789
//  Output : 5
//
///////////////////////////////////////////////////////