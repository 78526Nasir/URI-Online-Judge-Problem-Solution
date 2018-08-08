/// solution no : #1178

#include<stdio.h>

int main()
{
    double arr[100], n;
    int i;

    scanf("%lf", &n);

    for(i=0; i<100; i++){
        if(i==0)
            arr[i] = n;
        else{
            arr[i] = arr[i-1]/2;
        }
    }

    for(i=0; i<100; i++)
        printf("N[%d] = %.4lf\n", i, arr[i]);

    return 0;
}



