// solution URI problem : #1017

#include <stdio.h>

int main()
{
    double fuelCons, avgSpeed, timeSpent;

    scanf("%lf%lf", &timeSpent, &avgSpeed);

    fuelCons = avgSpeed/12;

    printf("%.3lf\n", fuelCons*timeSpent);

    return 0;
}


