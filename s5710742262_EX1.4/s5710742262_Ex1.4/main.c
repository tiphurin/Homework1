#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculate Interest\n");
    float principal;
    float rate;
    int days;
    float Time;
    float interest;
    printf("Enter loan principal (-1 to end): ");
    scanf("%f",&principal);
    printf("Enter interest rate:");
    scanf("%f",&rate);
    printf("Enter term of the loan in days :");
    scanf("%d",&days);
    Time =principal*rate*days;
    interest= Time/365;
    printf("The interest charge is= %.2f",interest);
    return 0;
}
