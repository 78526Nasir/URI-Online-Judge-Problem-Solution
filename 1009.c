
// solution URI problem : #1009

#include<stdio.h>

int main()
{
    double salary, totalSales, bonus=0;
    char name[100];

    scanf("%s", name);
    scanf("%lf%lf", &salary, &totalSales);

    bonus = salary + (totalSales * 0.15);

    printf("TOTAL = R$ %.2lf\n", bonus);

    return 0;
}

