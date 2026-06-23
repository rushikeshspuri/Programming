///////////////////////////////////////////////////////
//
//  Include required header files
// 
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : RangeDisplay
//  Input :         Integer, Integer
//  Output :        void
//  Description :   Display numbers between
//                  given range
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//  Time Complexity : O(N)
//
///////////////////////////////////////////////////////
void RangeDisplay(int iStart , int iEnd)
{
    int iCnt = 0;
    
    if(iStart < 0 && iStart >= 90)
    {
        printf("Invalid Input");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

///////////////////////////////////////////////////////
//
//  Application to display numbers
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

    RangeDisplay(iValue1 , iValue2);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 5 10
//  Output : 5 6 7 8 9 10
//
///////////////////////////////////////////////////////
