#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Put Charactor : ");
    char A;
    scanf("%c",&A);
    if((A; <= 90)&&(A >= 65)) A = (A - 65) + 97;
    else if ((A >= 97)&&(A <= 122)) A = (A-97) + 65;
    else A = A;
    printf("%c",A);
    return 0;
}
