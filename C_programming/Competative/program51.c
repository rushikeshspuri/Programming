///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include <stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : SquareMeter
//  Input :         Integer
//  Output :        Double
//  Description :   Convert square feet into
//                  square meter
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//  Time Complexity : O(1)
//
///////////////////////////////////////////////////////
double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.0929;
    
    return dMeter;
}

///////////////////////////////////////////////////////
//
//  Application to convert square feet
//  into square meter
//
///////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%lf", dRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 100
//  Output : 9.290000
//
///////////////////////////////////////////////////////