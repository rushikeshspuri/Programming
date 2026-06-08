#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLenght)
{
    int iCnt = 0 , iSumEven = 0, iSumOdd = 0, iDiff = 0;
    
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {   
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt] ;   
        }  
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    
    iDiff = iSumEven - iSumOdd;

    return iDiff;
}

int main ()
{
    int *p = NULL , iSize = 0 , iCnt = 0 , iRet = 0;
    
    printf("Enter number of Elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Summation is : %d\n", iRet);

    free(p);

    return 0;   
}