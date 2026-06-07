#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iSum = 0;
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
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

    iRet = Summation(Brr,iLenght);

    printf("Summation is :%d\n",iRet);

    free(Brr);
    
    return 0;
}