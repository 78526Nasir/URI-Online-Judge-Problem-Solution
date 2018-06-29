/// solution URI problem : #1046

#include<stdio.h>

int main()
{
    int start, end, begin;

    scanf("%d%d", &start, &end);

    begin = 24 - start;
    begin += end;

    if(begin>24)
        begin-=24;

    printf("O JOGO DUROU %d HORA(S)\n",begin);

    return 0;
}




