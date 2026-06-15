#include<stdio.h>
#include<stdlib.h>

int Product(int Arr [],int iLength)
{
    int iCnt = 0 , iProduct = 1, iFlag = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(Arr[iCnt] % 2 != 0)
       {
           iProduct = iProduct * Arr[iCnt];
           iFlag = 1;
       }
    }

    if(iFlag = 0)
       {
            return 0;
       }

    return iProduct;
}
int main()
{
    int iSize = 0; int iCnt = 0;
    int *p = NULL , iRet = 0;

    printf("Enter number of Elements : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("memory not allocated");
        return -1;
    }

    printf("Enter %d Elements \n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

   iRet = Product(p,iSize);

   printf("Product of Odd Element : %d\n",iRet);

    free(p);

    return 0;
}