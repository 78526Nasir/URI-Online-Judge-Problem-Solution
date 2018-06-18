// solution URI problem : #1038

#include<stdio.h>

int main()
{
    int X, Y;
    float priceArr[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    float total;

    scanf("%d%d", &X, &Y);

    total = (priceArr[X-1] * Y);

    printf("Total: R$ %.2f\n", total);

    return 0;
}

