/// solution URI problem : #1064

#include<stdio.h>

int main()
{
    int i, k=0;
    float number, sum=0;

    for(i=1; i<=6; i++){
        scanf("%f", &number);

        if(number>0){
            k++;
            sum += number;
        }
    }

    printf("%d valores positivos\n", k);
    printf("%.1f\n", sum/k);
    return 0;

}


