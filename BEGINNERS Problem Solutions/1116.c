/// solution no: #1116

#include<stdio.h>

int main()
{
    int n;
    float first, second;
    scanf("%d", &n);

    while(n!=0){
        scanf("%f %f", &first, &second);

        if(second==0){
            printf("divisao impossivel\n");
        }else
            printf("%.1f\n",(first/second));
        n--;
    }

    return 0;
}
