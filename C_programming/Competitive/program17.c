///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>
///////////////////////////////////////////////////////
//
//  Function name : FactRev
//  Input    :       Integer  
//  Output   :       Output   
//  Description :    To Display Decrasing factors
//  Date :          24/05/2026
//  Author :        Rushikesh Puri 
//
///////////////////////////////////////////////////////
int FactRev(int iNo)
{
    int iCnt = 0;
  

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt  == 0) 
        {
            printf("%d\t",iCnt);
        }            
    }
}
///////////////////////////////////////////////////////
//
//  Application To Display Decrasing factors
//
///////////////////////////////////////////////////////
int main ()
{
    int iValue = 0;
   

    printf("Enter number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input  : 32
//  Output : 32      16      8       4       2       1
//
///////////////////////////////////////////////////////



