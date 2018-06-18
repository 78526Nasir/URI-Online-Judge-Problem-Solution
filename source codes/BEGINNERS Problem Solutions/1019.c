// solution URI problem : #1019

#include<stdio.h>

int main()
{
    int seconds, hour=0, min=0, sec=0;

    scanf("%d", &seconds);

    min = seconds/60;
    sec = seconds%60;

    hour = min/60;
    min%=60;


    printf("%d:%d:%d\n",hour, min, sec);

    return 0;
}


