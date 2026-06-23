///////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DiffFact
//  Input :         Integer
//  Output :        Integer  
//  Description :   Difference between Summetion of Factors & NonFactors 
//  Date :          29
//  Author :        Rushikesh Puri
//
////////////////////////////////////////////////////////////////////////////////
int DiffFact(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    int iNonFact = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)  //  Factors
        {
           iFact = iFact + iCnt ;  
        }  
        else 
        {
            iNonFact = iNonFact + iCnt;
        }       
    }
    
    return iFact - iNonFact;        // Difference
    
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Application to perform Difference between Summetion of Factors & NonFactors 
//
//////////////////////////////////////////////////////////////////////////////////
int main ()
{
    int iValue = 0;
    int iRet = 0;
   

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = DiffFact(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

///////////////////////////////////////////////////////
//
//  Input :     
//  Output :    
//
///////////////////////////////////////////////////////




