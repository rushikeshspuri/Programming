///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include <stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : FhtoCs
//  Input :         Float
//  Output :        Double
//  Description :   Convert Fahrenheit temperature
//                  into Celsius
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
double FhtoCs(float fTemp)
{
    float fCelcius = 0.0f;

    fCelcius = ((fTemp - 32) * (5.0 / 9.0));
    
    return fCelcius;
}

///////////////////////////////////////////////////////
//
//  Application to convert Fahrenheit
//  into Celsius
//
///////////////////////////////////////////////////////
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Tempreature in Faherenheit\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("%lf", dRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 98.6
//  Output : 37.000000
//
///////////////////////////////////////////////////////