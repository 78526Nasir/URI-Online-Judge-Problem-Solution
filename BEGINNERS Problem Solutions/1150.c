/// solution no: #1150

#include <stdio.h>

int main() {
    int X, Y, Z=1, i;
    scanf("%d", &X);
    scanf("%d", &Y);
    while(Y<=X)
        scanf("%d", &Y);

    for(i=X;X<=Y;i++)
    {
        X+=i;
        Z++;
    }
    printf("%d\n", Z);
    return 0;
}
