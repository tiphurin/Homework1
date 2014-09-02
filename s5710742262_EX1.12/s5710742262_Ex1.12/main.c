#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Present Command Salary and Tax \n");
    int Salary;
    float Tax;
    printf("Put Salary :");
    scanf("%d",&Salary);
    Tax = Salary*0.1;
    printf("Tax=%.2f \n",Tax);
    printf("Salary=%d\n",Salary);
    return 0;
}
