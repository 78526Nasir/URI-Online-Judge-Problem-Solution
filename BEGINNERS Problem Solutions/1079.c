/// solution no: #1079

#include<stdio.h>

int main()
{
    float first, second, third, avg;
    int n;

    scanf("%d", &n);

    while(n!=0){
        scanf("%f%f%f", &first, &second, &third);

        avg = ((first*2) + (second*3) + (third*5)) / 10;

        printf("%.1f\n", avg);
        n--;
    }

    return 0;
}

