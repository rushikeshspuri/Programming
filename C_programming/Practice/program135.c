#include<stdio.h>
#include<stdlib.h>


//Time Complexcity O(N)
int MaximumSearch(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0];          // intialise maximum with first element of Array
  
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;

}

int main ()
{
    int iLenght = 0, iCnt = 0 , iRet = 0;       
    int *Brr = NULL;                 // Pointer 
    
    printf("Enter Number of Elements\n");
    scanf("%d",&iLenght);             // To take input from User in iSize

    Brr = (int*)malloc(sizeof(int) * iLenght);      // Dynamic memory Alloction

    printf("Enter the Elements\n");

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);             // Value intialized in Brr & Array Created
    }

    iRet = MaximumSearch(Brr,iLenght);
    
    printf("Maximum element is %d\n",iRet);
    
    free(Brr);
    
    return 0;
}