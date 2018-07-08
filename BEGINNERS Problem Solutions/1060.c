/// solution URI problem : #1060

#include<stdio.h>

int main()
{
    int i, k=0;
    float number;

    for(i=1; i<=6; i++){
        scanf("%f", &number);

        if(number>0)
            k++;
    }

    printf("%d valores positivos\n", k);

    return 0;

}

