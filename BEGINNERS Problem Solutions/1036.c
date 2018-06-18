


// solution URI problem : #1036

/// formula:

// x1 = (-b + sqrt( (bb)-( 4ac) ) )/ 2a

// x2 = (-b - sqrt( (bb)-( 4ac) ) )/ 2a

// R1 will be x1 and R2 x2

#include<stdio.h>
#include<math.h>

int main()
{
    float a, b , c, sqrt_val, R1, R2;

    scanf("%f%f%f", &a, &b, &c);

    sqrt_val = ((b*b) - (4*a*c));

    if((2*a==0) || (sqrt_val < 0))
    {
        printf("Impossivel calcular\n");
    }
    else{
        R1 =  (-b + sqrt(sqrt_val)) / (2*a);
        R2 = (-b - sqrt(sqrt_val)) / (2*a);

        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }


    return 0;
}
