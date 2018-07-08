/// solution URI problem : #1072

#include<stdio.h>

int main()
{
    int n, number, i=0, j=0;

    scanf("%d", &n);
    while(n!=0){
        scanf("%d", &number);
        if(number>=10 && number <=20)
            i++;
        else
            j++;
        n--;
    }

    printf("%d in\n", i);
    printf("%d out\n", j);
    return 0;

}

