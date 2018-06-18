// solution URI problem : #1021

#include <stdio.h>

int main()
{
    int point;
    int money;
    char dot;

    scanf("%d%c%d", &money, &dot, &point);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", money/100);
    money %= 100;
    printf("%d nota(s) de R$ 50.00\n", money/50);
    money %= 50;
    printf("%d nota(s) de R$ 20.00\n", money/20);
    money %= 20;
    printf("%d nota(s) de R$ 10.00\n", money/10);
    money %= 10;
    printf("%d nota(s) de R$ 5.00\n", money/5);
    money %= 5;
    printf("%d nota(s) de R$ 2.00\n", money/2);
    money %= 2;


    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", money/1);
    money %= 1;

    printf("%d moeda(s) de R$ 0.50\n",point/50);
    point %=50;
    printf("%d moeda(s) de R$ 0.25\n",point/25);
    point %=25;
    printf("%d moeda(s) de R$ 0.10\n",point/10);
    point %=10;
    printf("%d moeda(s) de R$ 0.05\n",point/5);
    point %=5;
    printf("%d moeda(s) de R$ 0.01\n",point/1);
    point %=1;

    return 0;
}



