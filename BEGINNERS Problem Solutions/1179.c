/// solution no : #1179

#include<stdio.h>

int main()
{
    int even[5], odd[5], n, i, j, k, c;

    for(i=0,j=0, k=0; i<15; i++){
        scanf("%d", &n);

        if(n%2==0)
            even[j++] = n;
        else
            odd[k++] = n;

        if(j>4){
            j=0;
            for(c=0; c<5; c++)
                printf("par[%d] = %d\n", c, even[c]);
        }
        if(k>4){
            k=0;
            for(c=0; c<5; c++)
                printf("impar[%d] = %d\n", c, odd[c]);
        }

    }

    for(c=0; c<k; c++)
        printf("impar[%d] = %d\n", c, odd[c]);

    for(c=0; c<j; c++)
        printf("par[%d] = %d\n", c, even[c]);

    return 0;
}




