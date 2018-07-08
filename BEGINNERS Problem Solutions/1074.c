/// solution no: #1074

#include<stdio.h>
int main()
{
    int n, number;
    scanf("%d", &n);

    while(n!=0)
    {
        scanf("%d", &number);

        if(number>0){
            if(number%2==0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }else if(number<0){
            if(number%2==0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
        else{
            printf("NULL\n");
        }

        n--;
    }

    return 0;
}
