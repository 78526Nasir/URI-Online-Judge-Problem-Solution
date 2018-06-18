
// solution URI problem : #1026

#include<stdio.h>

int main()
{
    unsigned int c, d;

    while( scanf("%u%u", &c, &d) != EOF ){
        printf("%u\n", c^d);
    }

    return 0;
}
