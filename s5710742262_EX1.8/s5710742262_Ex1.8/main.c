#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculation Triagle Area\n");
    int Hight;
    int Base;
    int Multiplication;
    float Area;
    printf("Put Hight :");
    scanf("%d",&Hight);
    printf("Put Base :");
    scanf("%d",&Base);
    Multiplication=Hight*Base;
    Area=Multiplication/2;
    printf("Area=%.2f",Area);


    return 0;
}
