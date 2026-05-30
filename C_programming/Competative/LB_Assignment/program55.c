///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : RangeSumEven
//  Input :         Integer, Integer
//  Output :        Integer
//  Description :   Calculate sum of even numbers
//                  between given range
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//  Time Complexity : O(N)
//
///////////////////////////////////////////////////////
int RangeSumEven(int iStart , int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart < 0 && iStart >= 90)
    {
        printf("Invalid Input");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

///////////////////////////////////////////////////////
//
//  Application to calculate sum of
//  even numbers between given range
//
///////////////////////////////////////////////////////
int main ()
{   
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue1);

    printf("Enter Range\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1 , iValue2);

    printf("Addition is %d\n",iRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 1 10
//  Output : 30
//
///////////////////////////////////////////////////////