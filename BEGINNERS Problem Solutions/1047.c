/// solution URI problem : #1047

#include<stdio.h>

int main()
{
    int start_hour, end_hour, start_min, end_min, hour, min;

    scanf("%d%d%d%d", &start_hour, &start_min, &end_hour, &end_min);

    hour = 24 - start_hour;
    hour += end_hour;

    min = 60 - start_min;
    min += end_min;


    if(hour>24)
        hour-=24;

    if(min<60){
        hour--;
    }

    if(min > 60){
       min -= 60;
    }

    if(min == 60){
       min = 0;
    }

    if(hour==24 && min>0)
    {
        hour = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour, min);

    return 0;
}



