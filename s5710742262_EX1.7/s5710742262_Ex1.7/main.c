#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculation Number Share by 7 Divisibly\n");
    printf("Put Number");
    int A;
    scanf("%d",&A);
    if (A%7>0)
    {
        printf("Un Divisibly");
    }
    else if(A%7==0)
    {
        printf("Divisibly");
    }

    return 0;
}
