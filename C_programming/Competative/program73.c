#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iValue)
{
    int iCnt = 0 , iIndex = -1;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            iIndex = iCnt;
            break;
        }
        
    }

    return iIndex;
    
}

int main ()
{
    int *p = NULL;
    int iSize = 0 , iCnt = 0 , iRet = 0 , iNo = 0;

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

    printf("Enter the Number you want to Search : \n");
    scanf("%d",&iNo); 

    iRet = FirstOcc(p,iSize,iNo);

    if(iRet == -1)
    {
        printf("There is no such Number %d",iRet);
    }
    else
    {
        printf("First Occurrence of number is %d",iRet);
    }
   
    free(p);

    return 0;

}