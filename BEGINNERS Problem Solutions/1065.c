/// solution URI problem : #1065

#include<stdio.h>

int main()
{
    int i, k=0, number;

    for(i=1; i<=5; i++){
        scanf("%d", &number);

        if(number%2==0){
            k++;
        }
    }

    printf("%d valores pares\n", k);

    return 0;

}
