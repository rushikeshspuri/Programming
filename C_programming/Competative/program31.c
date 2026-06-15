///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>
///////////////////////////////////////////////////////
//
//  Function name : DisplaytableRev
//  Input :        Integer 
//  Output :       void
//  Description :   Display Table of given Number in reverse
//  Date :          29
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
void DispalyTableRev(int iNo)
{
    int iCnt = 0;
    

    for (iCnt = 10; iCnt > 0; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
}

///////////////////////////////////////////////////////
//
//  Application to Display Table of given Number in reverse
//
///////////////////////////////////////////////////////
int main ()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DispalyTableRev(iValue);

    return 0;
}
///////////////////////////////////////////////////////
//
//  Input : 2 
//  Output : 20 18 16 14 12 10 8 6 4 2    
//
///////////////////////////////////////////////////////




