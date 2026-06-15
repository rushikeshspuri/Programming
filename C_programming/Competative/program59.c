///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : CountFrequency
//  Input :         Integer
//  Output :        Integer
//  Description :   Count frequency of digit 2
//                  from given number
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//  Time Complexity : O(N)
//
///////////////////////////////////////////////////////
int CountFrequency(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        if(iNo % 10 == 2)    // check if last digit is 2
        {
            iCount++;
        }

        iNo = iNo / 10;       // remove last digit
    }

    return iCount;
}

///////////////////////////////////////////////////////
//
//  Application to count frequency
//  of digit 2
//
///////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = CountFrequency(iValue);

    printf("Frequency of 2 is : %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 223242
//  Output : 4
//
///////////////////////////////////////////////////////