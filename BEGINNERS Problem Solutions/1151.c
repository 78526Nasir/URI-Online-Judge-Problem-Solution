///solution no:1151

#include <stdio.h>

int main() {
    int a=0,b=1,c, i,n;
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        if(i+1==n)
            printf("%d", a);
        else
            printf("%d ", a);
        c = a+b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}

