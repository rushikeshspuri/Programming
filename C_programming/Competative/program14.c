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
void DisplayConvert (char Cvalue)
{
    if(Cvalue >= 'A' && Cvalue <= 'Z')
    {
        Cvalue = Cvalue + 32;
        printf("%c",Cvalue);
    }
    else if (Cvalue >= 'a' && Cvalue <= 'z')
    {
        Cvalue = Cvalue - 32;
        printf("%c",Cvalue);
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
