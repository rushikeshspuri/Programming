#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = true;
            break;        
        }
    }
        return bFlag;
     
}

int main ()
{
    int iLenght = 0, iCnt = 0;          // Store number of elements;
    int *Brr = NULL;                 // Pointer 
    bool bRet = false;
    
    printf("Enter Number of Elements\n");
    scanf("%d",&iLenght);             // To take input from User in iSize

    Brr = (int*)malloc(sizeof(int) * iLenght);      // Dynamic memory Alloction

    printf("Enter the Elements\n");

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);             // Value intialized in Brr & Array Created
    }

    bRet = LinearSearch(Brr,iLenght);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    free(Brr);
    
    return 0;
}