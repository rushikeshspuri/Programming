///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////

#include<stdio.h>
///////////////////////////////////////////////////////
//
//  Function name : DisplayFactors
//  Input   :       Integer   
//  Output  :       void
//  Description :   To Display Even Factors
//  Date :          23/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
void DisplayEvenFactor(int iNo)
{
    int i = 0;
    
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i=2; i<= iNo; i++)
    {
        if (iNo % i == 0 && i % 2)
        printf("%d\t",i);
    }
}
////////////////////////////////////////////////////////////
//
//  Application to  Display Even Factors 
//
///////////////////////////////////////////////////////////
int main ()
{
    int iValue = 0;

    printf("Enter your number\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
///////////////////////////////////////////////////////
//
//  Input  :     24
//  Output :    2    6    12    18    36
//
///////////////////////////////////////////////////////
