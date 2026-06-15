///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include <stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : DisplayPatterns
//  Input :         Integer
//  Output :        void
//  Description :   Display * and # patterns
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
void DisplayPatterns(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*  ");
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
    }
}

///////////////////////////////////////////////////////
//
//  Application to display * and # patterns
//
///////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    DisplayPatterns(iValue);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 5
//  Output : *  *  *  *  *  # # # # #
//
///////////////////////////////////////////////////////