#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[], int iLength)
{
    int iCnt = 0 ; int iMin = 0 , iMax = 0 , iDiff = 0;
    iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
   

    iDiff = iMax - iMin ;
    return iDiff;
}

int main ()
{
    int *p = NULL;
    int iSize = 0 , iCnt = 0 ;
    int iRet = 0;

    printf("Enter number of Elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d Elements \n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);
    
    printf("Difference  is  : %d ",iRet);
    free(p);

    return 0;

}