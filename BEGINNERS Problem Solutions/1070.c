
/// solution URI problem : #1070

#include<stdio.h>

int main()
{
    int i, n, k=0;
    scanf("%d", &n);

    for(i=n; k!=6; i++){
        if(i%2 !=0){
            printf("%d\n", i);
            k++;
        }
    }

    return 0;

}
