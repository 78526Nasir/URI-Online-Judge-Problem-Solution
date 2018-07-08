
/// solution URI problem : #1066

#include<stdio.h>

int main()
{
    int i, even=0, number, odd=0, pos=0, neg=0;

    for(i=1; i<=5; i++){
        scanf("%d", &number);

        if(number%2==0){
            even++;
        }else
            odd++;
        if(number>0)
            pos++;
        if(number<0)
            neg++;
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;

}
