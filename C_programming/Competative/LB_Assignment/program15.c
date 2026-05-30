
///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

typedef int BOOL;
#define True -1
#define False 0
///////////////////////////////////////////////////////
//
//  Function name : CheckVowels
//  Input :         Character
//  Output :        Boolean
//  Description :   To Check is Characters are Vowels
//  Date :          23/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
BOOL CheckVowel( char Cvalue)
{
    if (Cvalue == 'a' || Cvalue == 'e' || Cvalue == 'i' || Cvalue == 'o' || Cvalue == 'u' ||
        Cvalue == 'A' || Cvalue == 'E' || Cvalue == 'I' || Cvalue == 'O' || Cvalue == 'U')
    {
        return True;
    }
    else
    {
        return False;
    }
    
}
///////////////////////////////////////////////////////
//
//  Application to perform the Characters are Vowels
//
///////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = False;
    
    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if (bRet == True)
    {
        printf("it is vowel\n");
    }
    else
    {
        printf("it is not a vowel\n");        
    }
    return 0;
}
///////////////////////////////////////////////////////
//
//  Input :    'A' 
//  Output :   it is Vowel. 
//
///////////////////////////////////////////////////////




