///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include <stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : KMtoMEter
//  Input :         Integer 
//  Output :        Integer
//  Description :   Convert Kilometer into Meter
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
int KMtoMEter(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    int Km = 0;

    Km = iNo * 1000;

    return Km;
}

///////////////////////////////////////////////////////
//
//  Application to convert Kilometer into Meter
//
///////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance\n");
    scanf("%d", &iValue);

    iRet = KMtoMEter(iValue);

    printf("KM to Meter : %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 5
//  Output : 5000
//
///////////////////////////////////////////////////////
