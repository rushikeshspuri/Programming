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
//  Description :   Count frequency of digit 4
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
        if(iNo % 10 == 4)    // check if last digit is 4
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
//  of digit 4
//
///////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = CountFrequency(iValue);

    printf("Frequency of 4 is : %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 424544
//  Output : 4
//
///////////////////////////////////////////////////////
