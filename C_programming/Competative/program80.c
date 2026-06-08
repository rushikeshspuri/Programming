#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int temp = Arr[iCnt];
        int iFound = 0;

        while(temp != 0)
        {
            int iDigit = temp % 10;

            if(iDigit == 3)
            {
                iFound = 1;
                break;
            }

            temp = temp / 10;
        }

        if(iFound == 1)
        {
            printf("%d contains 3\n", Arr[iCnt]);
        }
        else
        {
            printf("%d does not contain 3\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int *p = NULL;
    int iSize = 0, iCnt = 0;

    printf("Enter number of Elements\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d Elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}