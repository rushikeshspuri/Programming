#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr[], int iLength)
{
    int iCnt = 0 ; int iMin = 0 ;
    iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(p,iSize);
    
    printf("Smallest number is %d :",iRet);
    free(p);

    return 0;

}
