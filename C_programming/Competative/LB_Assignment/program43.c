///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : CountOdd
//  Input :         Integer
//  Output :        Integer
//  Description :   Count odd digits from
//                  given number
//  Date :          29/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
int CountOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
  
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

///////////////////////////////////////////////////////
//
//  Application to count odd digits
//
///////////////////////////////////////////////////////
int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);
   
    return 0;
}

///////////////////////////////////////////////////////
//
//  Input : 123456
//  Output : 3
//
///////////////////////////////////////////////////////