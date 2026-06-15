/////////////////////////////////////////////////////
//
//  Include required header files
//
////////////////////////////////////////////////////
#include<stdio.h>

typedef int Bool;
#define True 1
#define False 0

////////////////////////////////////////////////////////////
//
//  Function name : Check
//  Input   : Integer
//  Output  : Boolean
//  Description : Check whether number is Divisible by 5
//  Date : 24/05/2026
//  Author : Rushikesh Puri
//
///////////////////////////////////////////////////////////

Bool Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return True ;
    }
    else 
    {
        return False;
    }
}
///////////////////////////////////////////////////////////////
//
//  Application to Check whether number is Divisible by 5
//
///////////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;     
    Bool bRet = False;

    printf("Enter your number");
    scanf("%d",&iValue);
    
    bRet = Check(iValue);

    if (bRet == True)
    {
        printf("Divisble by 5");
    }
    else
    {
        printf("Not divible by 5");
    }
    return 0;
}
//////////////////////////////////////////////////////////////////
//
// Input  : Integer
// Output : Divisble by 5 or Not Divisble by 5
//
//////////////////////////////////////////////////////////////////