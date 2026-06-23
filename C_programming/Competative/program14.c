///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>
///////////////////////////////////////////////////////
//
//  Function name : DisplayConvert
//  Input   :       Character  
//  Output  :       void
//  Description :   To Convert Lower case to Uppercase 
//  Date :          23/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
void DisplayConvert (char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf("%c",cValue);
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("%c",cValue);
    }
}

///////////////////////////////////////////////////////
//
//  Application to To Convert Lower case to Uppercase
//
///////////////////////////////////////////////////////

int main ()
{
    char cValue = '\0';

    printf("Enter Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}
///////////////////////////////////////////////////////
//
//  Input   :  'A'   
//  Output  :  'a'
//
///////////////////////////////////////////////////////
