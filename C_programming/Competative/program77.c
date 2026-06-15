#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[], int iLength)
{
    int iCnt = 0 ; int iMax = 0 ;
    iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
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

    iRet = Maximum(p,iSize);
    
    printf("Largest number is %d :",iRet);
    free(p);

    return 0;

}