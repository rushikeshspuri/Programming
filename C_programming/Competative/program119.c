#include<stdio.h>

void Display(int iRow, int iCol)
{
   int i = 0 , j = 0;
   char ch1 = '\0';
   char ch2 = '\0';

   for(i = 1; i <= iRow; i++)
    {
        for(j = 1 , ch1 = 'A' , ch2 = 'a'; j <= iCol; j++ , ch1++ ,ch2++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch2);
            }
            
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows: \n");
    scanf("%d",&iValue1);

    printf("Enter number of Columns: \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}