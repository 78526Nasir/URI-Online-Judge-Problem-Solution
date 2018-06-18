
// solution URI problem : #1014

#include <stdio.h>

int main()
{
    double distance, fuelCon;

    scanf("%lf%lf", &distance, &fuelCon);

    printf("%.3lf km/l\n", (distance/fuelCon));

    return 0;
}
