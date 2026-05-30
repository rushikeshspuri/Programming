///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include <stdio.h>
///////////////////////////////////////////////////////
//
//  Function name : Display
//  Input :         Integer   
//  Output :        void  
//  Description :   Accept Single Number & print its word
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//  Time Complexictiy : O(1)
//
///////////////////////////////////////////////////////
void Display(int iNo)
{
    if (iNo == 0)
    {
        printf("Zero\n");
    }
    else if (iNo == 1)
    {
        printf("One\n");
    }
    else if (iNo == 2)
    {
        printf("Two\n");
    }
    else if (iNo == 3)
    {
        printf("Three\n");
    }
    else if (iNo == 4)
    {
        printf("Four\n");
    }
    else if (iNo == 5)
    {
        printf("Five\n");
    }
    else if (iNo == 6)
    {
        printf("Six\n");
    }
    else if (iNo == 7)
    {
        printf("Seven\n");
    }
    else if (iNo == 8)
    {
        printf("Eight\n");
    }
    else if (iNo == 9)
    {
        printf("Nine\n");
    }
    else
    {
        printf("Invalid Input");
    }
        
}
///////////////////////////////////////////////////////
//
//  Application toAccept Single Number & print its word
//
///////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter Single Digit Number\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
///////////////////////////////////////////////////////
//
//  Input :     9
//  Output :  "Nine"
//
///////////////////////////////////////////////////////




