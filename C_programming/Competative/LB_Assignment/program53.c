///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : RangeDisplayEven
//  Input :         Integer, Integer
//  Output :        void
//  Description :   Display even numbers
//                  between given range
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//  Time Complexity : O(N)
//
///////////////////////////////////////////////////////
void RangeDisplayEven(int iStart , int iEnd)
{
    int iCnt = 0;

    if(iStart < 0 && iStart >= 90)
    {
        printf("Invalid Input");
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

///////////////////////////////////////////////////////
//
//  Application to display even numbers
//  between given range
//
///////////////////////////////////////////////////////
int main ()
{   
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number\n");
    scanf("%d",&iValue1);

    printf("Enter Range\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1 , iValue2);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 1 10
//  Output : 2 4 6 8 10
//
///////////////////////////////////////////////////////