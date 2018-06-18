// solution URI problem : #1020

#include<stdio.h>

int main()
{
    int age, year=0, month=0, day=0;

    scanf("%d", &age);

    year = age/365;
    day = age%365;
    month = day/30;
    day%=30;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);

    return 0;
}



