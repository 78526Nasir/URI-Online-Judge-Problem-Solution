/// solution no:#1153

#include<stdio.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return (n*fact(n-1));
}

int main()
{
    int n, f;
    scanf("%d", &n);

    f = fact(n);
    printf("%d\n", f);

    return 0;
}
