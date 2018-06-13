// solution URI problem : #1005

#include<stdio.h>

int main()
{
    double A=0.0, B=0.0, MEDIA=0.0;

    scanf("%lf%lf", &A, &B);

    MEDIA = ((A * 3.5) + (B * 7.5)) /(3.5 + 7.5);

    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}


