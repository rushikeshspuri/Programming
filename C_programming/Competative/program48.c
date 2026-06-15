///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include <stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : RectArea
//  Input :         Float, Float
//  Output :        Double
//  Description :   Calculate area of rectangle
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//  Time Complexity : O(1)
//
///////////////////////////////////////////////////////
double RectArea(float fHeight, float fWeidht)
{
    double dArea = 0.0;

    dArea = fHeight * fWeidht;

    return dArea;
}

///////////////////////////////////////////////////////
//
//  Application to calculate area of rectangle
//
///////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Height\n");
    scanf("%f", &fValue1);

    printf("Enter Weidht\n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %lf", dRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 5 4
//  Output : 20.000000
//
///////////////////////////////////////////////////////