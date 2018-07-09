/// solution no: #1080

#include<stdio.h>

int main()
{
    int n, largest=0, pos=0, i;

    for(i=1; i<=100; i++){
        scanf("%d", &n);

        if(n>largest){
            largest=n;
            pos=i;
        }
    }

    printf("%d\n%d\n", largest, pos);
    return 0;
}


