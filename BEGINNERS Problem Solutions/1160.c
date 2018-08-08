/// solution no : #1160

#include<stdio.h>

int main()
{
    int PA, PB, y,i, n;
    double GA, GB;

    scanf("%d", &n);

    while(n!=0){
        scanf("%d%d%lf%lf", &PA, &PB,  &GA, &GB);
        y=0;
        while(PA<=PB){
            PA = PA + (PA*(GA/100));
            PB = PB + (PB*(GB/100));

            y++;

            if(y>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(y<=100)
            printf("%d anos.\n", y);

        n--;
    }

    return 0;
}
