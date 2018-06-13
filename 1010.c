
// solution URI problem : #1010

#include<stdio.h>

int main()
{
    int product_1, product_2, unit_1, unit_2;
    double price_1, price_2, total;

    scanf("%d%d%lf", &product_1, &unit_1, &price_1);
    scanf("%d%d%lf", &product_2, &unit_2, &price_2);

    total = (unit_1 * price_1) + (unit_2 * price_2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}

