/// solution no: #1158

#include<stdio.h>

int main()
{
    int n, X, Y, i, sum=0;
    scanf("%d", &n);

    while(n!=0){
        scanf("%d%d", &X, &Y);

        for(i=1; i<=Y; i++){
            if(X%2==0){
                X++;
                sum+= X;
            }else{
                sum+=X;
            }
            X+=2;
        }
        printf("%d\n", sum);
        sum=0;
        n--;
    }

    return 0;
}


