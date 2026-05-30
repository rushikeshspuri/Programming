///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : MultFact
//  Input :         Integer
//  Output :        Integer
//  Description :   Multiplication of Factors
//  Date :          24/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if(iNo % iCnt == 0)             //Check Factor
        {
            iMult = iMult * iCnt ;
        }

    }
     return iMult;

}

///////////////////////////////////////////////////////
//
//  Application to perform Multiplication of Factors
//
///////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;
    int iAns = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iAns = MultFact(iValue);

    printf("%d\n",iAns);


    return 0;
}
///////////////////////////////////////////////////////
//
//  Input  :     52
//  Output :    2704
//
///////////////////////////////////////////////////////