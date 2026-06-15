///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function name : Number
//  Input :         Integer
//  Output :        void
//  Description :   to accept Number and print small , medium ,large 
//                  based on < 50 , 50 >  
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//  Time Complexictiy : O(1)
//
///////////////////////////////////////////////////////////////////////////
void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if (iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}
/////////////////////////////////////////////////////////////////////////
//
//  Application to perform to accept Number and print small, 
//  medium ,large based on < 50 , 50 >
//                  
//
//////////////////////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
///////////////////////////////////////////////////////
//
//  Input :     75
//  Output :    Medium
//
///////////////////////////////////////////////////////



