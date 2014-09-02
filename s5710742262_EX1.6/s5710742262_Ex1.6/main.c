#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    int B;
    int C;
    int sum;
    float Average;
    printf("put number one :");
    scanf("%d",&A);
    printf("put number two :");
    scanf("%d",&B);
    printf("put number three :");
    scanf("%d",&C);
    sum=A+B+C;
    Average=sum/3;
    printf("Average=%.2f",Average);


    return 0;
}
