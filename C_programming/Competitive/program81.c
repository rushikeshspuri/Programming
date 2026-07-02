#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int temp = Arr[iCnt];
        int iSum = 0;

        while(temp != 0) 
        {
            iSum = iSum + (temp % 10);
            temp = temp / 10;
        }

        printf("Sum of digits of %d is %d\n", Arr[iCnt], iSum);
    }
}

int main ()
{
    int *p = NULL;
    int iSize = 0 , iCnt = 0 ;

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

    Digits(p, iSize);

    free(p);

    return 0;
}
