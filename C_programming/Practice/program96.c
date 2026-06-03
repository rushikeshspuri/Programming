#include<stdio.h>
#include<stdio.h>

int main ()
{
    int iArr[7];

    iArr[0] = 10;
    iArr[3] = 20;
    iArr[6] = 30;

    printf("%d\n",iArr[0]);
    printf("%d\n",iArr[3]);
    printf("%d\n",iArr[6]);
    
    printf("%d\n",iArr[2]);
    printf("%d\n",iArr[5]);
 
    printf("%d\n",sizeof(iArr));    // Size of iArr
    
    return 0;
}