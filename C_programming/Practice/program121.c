#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Elements of the array are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main ()
{
    int *Brr = NULL;
    int iLenght = 0;                // No of Elements
    int iCnt = 0;

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
    Display(Brr,iLenght);

    // Step 5 : Deallocate the memory
    free(Brr);
    
    return 0;
}