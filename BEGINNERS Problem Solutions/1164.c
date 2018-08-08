/// solution no : #1164

#include<stdio.h>

int main()
{
    int n, no, i, total=0;
    scanf("%d", &n);

    while(n!=0){
        scanf("%d", &no);

        for(i=1; i<=no/2; i++)
        {
            if(no%i==0)
            {
                total+=i;
            }
        }

        if(total==no){
            printf("%d eh perfeito\n", no);
        }else
            printf("%d nao eh perfeito\n", no);

        total=0;
        n--;
    }

    return 0;
}

