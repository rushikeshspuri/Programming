#include<stdio.h>

int main()
{
    int i = 11;         // hot choclate cup
    int j = 21;         // Nutella cup  

    int temp = 0;       // Extra cup

    temp = i;
    i = j;
    j = temp;

    printf("%d\n",i);
    printf("%d\n",j);

    return 0;
}