///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include <stdio.h>
///////////////////////////////////////////////////////
//
//  Function name : Displaay
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
    char *words[] ={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    
    if (iNo >= 0 && iNo <=9)
    {
        printf("%s",words[iNo]);        // Direct use iNo as a Index
    }
    else
    {
        printf("Input Invalid");
    }
}
///////////////////////////////////////////////////////////
//
//  Application to Accept Single Number & print its word
//
//////////////////////////////////////////////////////////

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
//  Input :     1
//  Output :   "One"
//
///////////////////////////////////////////////////////



