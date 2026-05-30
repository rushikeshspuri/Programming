///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : RangeDisplayRev
//  Input :         Integer, Integer
//  Output :        void
//  Description :   Display numbers in reverse
//                  order between given range
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//  Time Complexity : O(N)
//
///////////////////////////////////////////////////////
void RangeDisplayRev(int iStart , int iEnd)
{
    int iCnt = 0;
    
    if(iStart > iEnd)
    {
        printf("Invalid Input");
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

///////////////////////////////////////////////////////
//
//  Application to display numbers in
//  reverse order between given range
//
///////////////////////////////////////////////////////
int main ()
{   
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number\n");
    scanf("%d",&iValue1);

    printf("Enter Range\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1 , iValue2);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 5 10
//  Output : 10 9 8 7 6 5
//
///////////////////////////////////////////////////////