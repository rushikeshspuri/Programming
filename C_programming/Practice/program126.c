#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
   
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
           iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
    
}

int main ()
{
    int iLenght = 0, iCnt = 0;          // Store number of elements;
    int *Brr = NULL;                 // Pointer 
    int iRet = 0;
    
    printf("Enter Number of Elements\n");
    scanf("%d",&iLenght);             // To take input from User in iSize

    Brr = (int*)malloc(sizeof(iLenght) * iLenght);      // Dynamic memory Alloction

    printf("Enter the Elements\n");

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);             // Value intialized in Brr & Array Created
    }

    iRet = CountOdd(Brr,iLenght);

    printf("Odd Elements are : %d\n",iRet);

    free(Brr);
    
    return 0;
}