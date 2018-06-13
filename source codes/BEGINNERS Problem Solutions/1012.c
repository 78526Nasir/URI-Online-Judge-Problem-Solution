
// solution URI problem : #1012

#include<stdio.h>

int main()
{
    double A, B, C, triA, circleA, trapeziumA, squareA, rectA, PI = 3.14159;

    scanf("%lf%lf%lf", &A, &B, &C);

    triA = (A*C)/2;
    circleA = PI * (C*C);
    trapeziumA = ((A+B)/2) * C;
    squareA = B*B;
    rectA = A*B;

    printf("TRIANGULO: %.3lf\n", triA);
    printf("CIRCULO: %.3lf\n",circleA);
    printf("TRAPEZIO: %.3lf\n",trapeziumA);
    printf("QUADRADO: %.3lf\n",squareA);
    printf("RETANGULO: %.3lf\n",rectA);

    return 0;
}


