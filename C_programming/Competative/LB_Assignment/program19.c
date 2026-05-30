///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : SumNonFact
//  Input :         Integer
//  Output :        Integer
//  Description :   To Display Summestion of NonFactors
//  Date :          26/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iAdd = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)  //  Factors & non Factors
        {
            iAdd = iAdd + iCnt ;
        }            
    }
    return iAdd;

}

///////////////////////////////////////////////////////
//
//  Application to perform 
//
///////////////////////////////////////////////////////
int main ()
{
    int iValue = 0;
    int iRet = 0;
   

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

///////////////////////////////////////////////////////
//
//  Input :     12
//  Output :    50 
//
///////////////////////////////////////////////////////



