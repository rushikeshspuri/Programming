#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        printf("Invalid Parameters\n");
        printf("Number of rows & column must be same");
        return;
    }

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0;
    printf("Enter number of Rows\n");
    scanf("%d", &iValue1);

    int iValue2 = 0;
    printf("Enter number of Column\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}