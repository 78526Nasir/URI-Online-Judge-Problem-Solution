/// solution no: #1156

#include<stdio.h>

int main()
{
    double SUM=0, i, j;

    for(i=1, j=1; i<=39; i+=2, j*=2)
    {
        SUM += i/j;
    }

    printf("%.2lf\n", SUM);
    return 0;
}

