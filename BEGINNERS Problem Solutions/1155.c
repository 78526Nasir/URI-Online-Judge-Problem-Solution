/// solution no:#1155

#include<stdio.h>

int main()
{
    float S=0, i;

    for(i=1;i<=100;i++)
    {
        S += 1/i;
    }

    printf("%.2f\n", S);


    return 0;
}
