///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h> 
///////////////////////////////////////////////////////
//
//  Function name : DisplayFactorial
//  Input :        integer 
//  Output :       void
//  Description :  to find factorial of given number 
//  Date :          29
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
int DisplayFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt ;
    }
   
    return iFact;
}
///////////////////////////////////////////////////////
//
//  Application to to find factorial of given number 
//
///////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = DisplayFactorial(iValue);

    printf("%d",iRet);
    
    return 0;
}
///////////////////////////////////////////////////////
//
//  Input :     5
//  Output :    120 (5*4*3*2*1)
//
///////////////////////////////////////////////////////



