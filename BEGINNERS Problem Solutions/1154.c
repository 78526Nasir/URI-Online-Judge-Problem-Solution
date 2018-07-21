/// solution no:#1154

#include<stdio.h>

int main()
{
    int i=0, n;
    float total=0;

    while(1){
        scanf("%d", &n);
        if(n<0)
            break;
        else{
            total=total+n;
            i++;
        }
    }

    printf("%.2f\n", total/i);


    return 0;
}

