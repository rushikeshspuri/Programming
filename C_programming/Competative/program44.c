///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : Count
//  Input :         Integer
//  Output :        Integer
//  Description :   Count digits between
//                  3 and 7 from given number
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
int Count(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
  
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 3 && iDigit < 7)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

///////////////////////////////////////////////////////
//
//  Application to count digits between
//  3 and 7
//
///////////////////////////////////////////////////////
int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);
   
    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 123456789
//  Output : 3
//
///////////////////////////////////////////////////////