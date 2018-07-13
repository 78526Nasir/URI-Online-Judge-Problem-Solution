/// solution no: #1145

#include<stdio.h>

int main()
{
    long first,second, i, j;

    scanf("%ld%ld", &first, &second);

    for(i=1; i<=second; i+=first)
    {
        for(j=i; j<i+first; j++)
        {
            if(j<(i+first)-1)
                printf("%ld ", j);
            else
                printf("%ld",j);
        }

        printf("\n");
    }

    return 0;
}

