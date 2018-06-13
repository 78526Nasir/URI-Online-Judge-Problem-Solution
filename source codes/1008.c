
// solution URI problem : #1008

#include<stdio.h>

int main()
{
    int number, hour;
    float amount;

    scanf("%d%d%f", &number, &hour, &amount);

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", (hour*amount));

    return 0;
}

