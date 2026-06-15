///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : DisplayDigit
//  Input :         Integer
//  Output :        void
//  Description :   Display digits of given
//                  number in reverse order
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//  Time Complexity : O(N)
//
///////////////////////////////////////////////////////
void DisplayDigit(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;

        printf("%d",iDigit);

        iNo = iNo / 10;
    }
}

///////////////////////////////////////////////////////
//
//  Application to display digits
//  in reverse order
//
///////////////////////////////////////////////////////
int main ()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 1234
//  Output : 4321
//
///////////////////////////////////////////////////////