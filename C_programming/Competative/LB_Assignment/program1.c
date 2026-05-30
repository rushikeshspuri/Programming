/////////////////////////////////////////////////////
//
//  Include required header files
//
////////////////////////////////////////////////////
#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function name : Divide
//  Input   : Integer
//  Output  : Integer
//  Description : Perform Division of 2 numbers
//  Date : 22/05/2026
//  Author : Rushikesh Puri
//
////////////////////////////////////////////////////

int Divide (int iNo1 , int iNo2)
{
    int iAns = 0;

    if (iNo2 == 1)
    {
        return -1;
    }
    iAns = iNo1/iNo2;

    return iAns;

}
/////////////////////////////////////////////////////
//
//  Application to perform Division of 2 numbers
//
/////////////////////////////////////////////////////

int main ()
{
    int iValue1 = 15 , iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is %d\n",iRet);

    return 0;
    
}
