/// solution no: #1061

#include<stdio.h>
int main()
{
    int start_day, start_hour, start_min, start_sec, end_day, end_hour, end_min, end_sec, r_hour, r_min, r_sec, r_day;
    char s[10];

    scanf("%s %d", s, &start_day);
    scanf("%d : %d : %d", &start_hour, &start_min, &start_sec);
    scanf("%s %d", s, &end_day);
    scanf("%d : %d : %d", &end_hour, &end_min, &end_sec);

    r_day = end_day - start_day;

    r_hour = 24-start_hour;
    r_hour+=end_hour;

    if(r_hour>24)
        r_hour-=24;

    r_min = 60 - start_min;
    r_min+=end_min;

    if(r_min==60){
        r_hour++;
        r_min=0;
    }

    if(r_min>60)
    {
        r_hour++;
        r_min-=60;
    }

    if(r_min<60)
        r_hour--;

    r_sec = 60-start_sec;
    r_sec += end_sec;

    if(r_sec>60){
        r_min++;
        r_sec-=60;
    }
    if(r_sec==60){
        r_min++;
        r_sec=0;
    }
    if(r_sec<60)
    {
        r_min--;
    }

    if(r_hour<24)
        r_day--;
    if(r_hour==24)
        r_hour=0;

    if(r_day<0)
        r_day=0;

    printf("%d dia(s)\n",r_day);
    printf("%d hora(s)\n",r_hour);
    printf("%d minuto(s)\n",r_min);
    printf("%d segundo(s)\n", r_sec);
    return 0;

}
