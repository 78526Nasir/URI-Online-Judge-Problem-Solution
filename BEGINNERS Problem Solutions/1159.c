/// solution no: #1159

#include<stdio.h>

int main()
{
    int n, X, Y, i, sum=0;

    while(1){
        scanf("%d", &X);
        if(X==0)
            break;

        for(i=1; i<=5; i++){
            if(X%2!=0){
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



