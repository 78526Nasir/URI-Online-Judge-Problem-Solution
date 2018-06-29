// solution URI problem : #1044

#include<stdio.h>

int main()
{
    int first, second;

    scanf("%d%d", &first, &second);

    if(second % first == 0 || first % second == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");

    return 0;
}



