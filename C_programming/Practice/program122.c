#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0 , iSum = 0;
    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main ()
{
    int *Brr = NULL;
    int iLenght = 0;                // No of Elements
    int iCnt = 0 , iRet = 0;

    // Step 1 : Accept the number of element
    printf("Enter no of elements\n");
    scanf("%d",&iLenght);

    // Step 2 : Allocate the memory
    Brr = (int*)malloc(iLenght * sizeof(int));

    // Step 3 : Accept the Values from user
    printf("Enter the Element\n");
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    // Step 4 : Use the memory (LOGIC)
    iRet = Summation(Brr,iLenght);
    
    printf("Addition is : %d\n",iRet);

    // Step 5 : Deallocate the memory
    free(Brr);
    
    return 0;
}