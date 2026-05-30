///////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////
#include<stdio.h>
///////////////////////////////////////////////////////
//
//  Function name : NonFact
//  Input :        Integer 
//  Output :       Integer 
//  Description :  Display all non Factors 
//  Date :          26/05/2026
//  Author :        Rushikesh Puri
//
///////////////////////////////////////////////////////
int NonFact(int iNo)
{
    int iCnt = 0;
  

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt  != 0)  // non Factors
        {
            printf("%d\t",iCnt);
        }            
    }
  

}

///////////////////////////////////////////////////////
//
//  Application to Display all non Factors
//
///////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;
   

    printf("Enter number\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input  : 12    
//  Output :  5   7   8    9   10   11  
//
///////////////////////////////////////////////////////



